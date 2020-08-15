#ifndef FDF_H
# define FDF_H
# include "libft/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <mlx.h>
# include <math.h>
# include "keys.h"
# include "linux_keys.h"

# define WINDOW_WIDTH 1000
# define WINDOW_HEIGHT 1000
# define ARR_END -2147483648

typedef struct	s_dot3d
{
	double	x;
	double	y;
	double	z;
}				t_dot3d;

typedef struct	s_param
{
	t_dot3d		**m_change;
	void		*mlx_ptr;
	void		*win_ptr;
	double		kx;
	double		ky;
	int			indic;
	char		*fname;
}				t_param;

typedef struct	s_kostil
{
	int			delta_x;
	int			delta_y;
	int			etta;
	int			indic;
}				t_kostil;

t_dot3d			**get_full_line(char *name);
t_dot3d			**split_more(char **board);
t_dot3d			**free_struct_3_dim(char ***nums_char,
	int main_lines, t_dot3d **map_nums, int indic);
t_dot3d			**turn_into_nums(char ***nums_char, int main_lines);
t_dot3d			**struct_arr_creator(char ***nums_char,
	int main_lines, int *nums_in_line);

void			swap_xy(t_dot3d *d1, t_dot3d *d2, int *indic);
void			swap_dots(t_dot3d *d1, t_dot3d *d2);
void			line_putter(t_param param, t_dot3d d1, t_dot3d d2);
void			map_drawer(t_dot3d **map, t_param param);
void			free_struct(t_dot3d **map);

t_dot3d			coord_creator(t_dot3d dot, double x, double y, double z);
t_dot3d			**change_coords(t_dot3d **map,
	double alpha, double betta, double gamma);
t_dot3d			**coeff_multer(t_dot3d **map, double coeff);
t_dot3d			**start_coeff_counter(t_dot3d **map);

void			take_new_place(int keycode, void *new_param);
void			close_window(void *param);
void			rotat(int keycode, void *param);
int				key_press_down(int keycode, void *param);
void			resize_figure(int keycode, t_param new_param);

void			swap_projections(void *param);

#endif
