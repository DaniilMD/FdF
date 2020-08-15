# FdF
## Project objective
  Modelize in 3D some magnificent landscapes, imaginary or not. Use a graphics library for it.
## Skills to acquire and use
•	Fundamentals of C  
•	Algorithm elaboration  
•	Imperative programming  
•	Rigor  
•	Graphics  
•	Team work
• Discover the basics of graphic programming
• Discover my first graphics library - miniLibX
## How to run it? (works on Linux)
•	git clone https://github.com/DaniilMD/FdF.git «Folder name»  
•	cd «Folder name»  
•	make  
•	Run the program using executable "fdf" and a map model text file as an argument. (There is a special folder "test_maps/" in the project repository, which contains several maps to use)  
For example:  
```
./fdf test_maps/10-2.fdf 
```
You are going to see something like this:  
  
![Screenshot from 2020-08-15 14-13-13](https://user-images.githubusercontent.com/48802453/90311271-c9b0f400-df01-11ea-8b54-eb079b338947.png)
  
## What does it do?
It reads a map file getting 3D coordinates of points on the map. Then builds a 3D image on the screen by connecting adjacent points with lines. Here is an another example:
  
![Screenshot from 2020-08-15 18-31-27](https://user-images.githubusercontent.com/48802453/90315632-92ecd500-df25-11ea-98f4-d4a5346e8d59.png)
 
## How it works
To be added...  
## Project evaluation result  
### Score 125/100  
Mandatory part  
100/100  
  
Bonus part  
25/25

Bonus functionality:  
  
Original look ("pylone.fdf" map):  
![Screenshot from 2020-08-15 14-43-44](https://user-images.githubusercontent.com/48802453/90311670-3af2a600-df06-11ea-9dba-8533ac3a131e.png)
  
1) Shifting location (using arrow keys):  
  
![Screenshot from 2020-08-15 14-43-51](https://user-images.githubusercontent.com/48802453/90311672-3c23d300-df06-11ea-8386-be4fafbba77e.png)
  
2) Rotating:  
  
  2.1 Around X axis (using "W" and "S")
![Screenshot from 2020-08-15 14-43-59](https://user-images.githubusercontent.com/48802453/90311675-3ded9680-df06-11ea-8064-3ea536997f63.png)
  
  2.2 Around Y axis (using "A" and "D")
![Screenshot from 2020-08-15 14-44-12](https://user-images.githubusercontent.com/48802453/90311676-3e862d00-df06-11ea-86ee-f4f80f873924.png)
  
  2.3 Around Z axis (using "Q" and "E")
![Screenshot from 2020-08-15 14-44-23](https://user-images.githubusercontent.com/48802453/90311677-3fb75a00-df06-11ea-844b-dc9ac67aa863.png)
  
3) Switching between isometric and parallel projection using "space" key
  
Parallel:  
![Screenshot from 2020-08-15 18-17-48](https://user-images.githubusercontent.com/48802453/90315452-5e2c4e00-df24-11ea-99fc-6585dc14e19d.png)
  
Iso:  
![Screenshot from 2020-08-15 18-17-47](https://user-images.githubusercontent.com/48802453/90315453-5f5d7b00-df24-11ea-9e23-56915b727c37.png)

4) Changing the size of the map on the screen (using keys "+" and "-")

Bigger (using "+"):  
![Screenshot from 2020-08-15 18-21-16](https://user-images.githubusercontent.com/48802453/90315470-861bb180-df24-11ea-8a83-c6ecf6d64457.png)
  
Smaller (using "-"):  
![Screenshot from 2020-08-15 18-21-19](https://user-images.githubusercontent.com/48802453/90315471-86b44800-df24-11ea-9d40-bea12d844d1d.png)


5) Adapting map representation to the window size
  
This is a part of a big map called "mars.fdf":  
![Screenshot from 2020-08-15 18-19-57](https://user-images.githubusercontent.com/48802453/90315534-04785380-df25-11ea-8833-714b400c86c1.png)
  
Even such a big map is centered, set to isometic projection and size chosen to fit in the window nicely:  
![Screenshot from 2020-08-15 18-22-51](https://user-images.githubusercontent.com/48802453/90315535-0510ea00-df25-11ea-9c5f-763b1ca43771.png)

