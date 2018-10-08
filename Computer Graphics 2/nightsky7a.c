#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>
 
int main() {
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    


 
   rectangle(left, top, right, bottom);
   circle(x, y, radius);
   bar(left + 300, top, right + 300, bottom);
   line(left - 10, top + 150, left + 410, top + 150);
   ellipse(x, y + 200, 0, 360, 100, 50);
   outtextxy(left + 100, top + 325, "My First C Graphics Program");
 
}
        
 
 while (!kbhit()) {
      /* color 500 random pixels on screen */
   for(i=0; i<=500; i++) {
       x=rand()%getmaxx();
          y=rand()%getmaxy();
          putpixel(x,y,15);
      }
      delay(500);
 
      /* clears screen */
      cleardevice();
    }
 
    getch();
    closegraph();
    return 0;
}
