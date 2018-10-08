#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(){
   int gd = DETECT,gm;
   initgraph(&gd, &gm, "C:\\TurboC3\\bgi");
   outtextxy(50,30, "Concentric Circles");
   setcolor(RED);
   circle(100,150,30);
   setcolor(GREEN);
   circle(100,150,50);
   setcolor(YELLOW);
   circle(100,150,70);
   setcolor(BLUE);
   circle(100,150,90);
   getch();
   closegraph();
   return 0;
}