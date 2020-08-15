#include "fdf.h"

void	take_new_place(int keycode, void *param)
{
	t_param	*new_param;

	new_param = (t_param *)param;
	if (keycode == KB_LEFT)
		new_param->kx += -10;
	if (keycode == KB_RIGHT)
		new_param->kx += 10;
	if (keycode == KB_DOWN)
		new_param->ky += 10;
	if (keycode == KB_UP)
		new_param->ky -= 10;
}

void	close_window(void *param)
{
	t_param	*new_param;

	new_param = (t_param *)param;
	free_struct(new_param->m_change);
	mlx_clear_window(new_param->mlx_ptr, new_param->win_ptr);
	(void)param;
	exit(0);
}

void	rotat(int keycode, void *param)
{
	t_param	*new_param;

	new_param = (t_param *)param;
	if (keycode == KB_A)
		new_param->m_change = change_coords(new_param->m_change, 0, -0.1, 0);
	if (keycode == KB_D)
		new_param->m_change = change_coords(new_param->m_change, 0, 0.1, 0);
	if (keycode == KB_W)
		new_param->m_change = change_coords(new_param->m_change, -0.1, 0, 0);
	if (keycode == KB_S)
		new_param->m_change = change_coords(new_param->m_change, 0.1, 0, 0);
	if (keycode == KB_Q)
		new_param->m_change = change_coords(new_param->m_change, 0, 0, -0.1);
	if (keycode == KB_E)
		new_param->m_change = change_coords(new_param->m_change, 0, 0, 0.1);
}

int		key_press_down(int keycode, void *param)
{
	t_param	*new_param;

	new_param = (t_param *)param;
	if (keycode == KB_W || keycode == KB_S || keycode == KB_A
		|| keycode == KB_D || keycode == KB_Q || keycode == KB_E)
		rotat(keycode, param);
	if (keycode == KB_UP || keycode == KB_DOWN
		|| keycode == KB_LEFT || keycode == KB_RIGHT)
		take_new_place(keycode, param);
	if (keycode == KB_PLUS || keycode == KB_MINUS)
		resize_figure(keycode, *new_param);
	if (keycode == KB_ESC)
		close_window(param);
	if (keycode == KB_SPACE)
		swap_projections(param);
	mlx_clear_window(new_param->mlx_ptr, new_param->win_ptr);
	map_drawer(new_param->m_change, *new_param);
	return (0);
}

void	resize_figure(int keycode, t_param new_param)
{
	int i;
	int j;

	i = 0;
	while (new_param.m_change[i] != NULL)
	{
		j = 0;
		while (new_param.m_change[i][j].z != ARR_END)
		{
			if (keycode == KB_PLUS)
			{
				new_param.m_change[i][j].x *= 2;
				new_param.m_change[i][j].y *= 2;
				new_param.m_change[i][j].z *= 2;
			}
			if (keycode == KB_MINUS)
			{
				new_param.m_change[i][j].x /= 2;
				new_param.m_change[i][j].y /= 2;
				new_param.m_change[i][j].z /= 2;
			}
			j++;
		}
		i++;
	}
}
