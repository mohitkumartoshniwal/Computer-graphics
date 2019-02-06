#include <graphics.h> 
#include <conio.h>
 
int main() 
{ 
   
    int gd = DETECT, gm; 
  
    initgraph(&gd, &gm, "path"); //change path 
  
   rectangle(150,150,450,450);
  
    getch(); 
    closegraph(); 
  
    return 0; 
} 