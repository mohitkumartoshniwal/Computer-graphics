   #include <graphics.h> 
#include <conio.h>
 
int main() 
{ 
   
    int gd = DETECT, gm; 
  
    initgraph(&gd, &gm, "path"); //change path 
  
 line(100,100,300,300);
 
    getch(); 
    closegraph(); 
  
    return 0; 
}  