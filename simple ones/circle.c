#include <graphics.h> 
#include <conio.h>
  
 
int main() 
{ 
   
    int gd = DETECT, gm; 
  
    initgraph(&gd, &gm, "path"); //change path 
  
    circle(250, 200, 50); 
  
    getch(); 
    closegraph(); 
  
    return 0; 
} 