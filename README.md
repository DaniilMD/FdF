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
  
![Screenshot from 2020-08-15 14-13-13](https://user-images.githubusercontent.com/48802453/90311271-c9b0f400-df01-11ea-8b54-eb079b338947.png)
  
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
  
