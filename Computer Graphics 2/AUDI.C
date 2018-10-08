#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int g=DETECT,m;
initgraph(&g,&m,"C:\\TurboC3\\bgi");
setcolor(2);
circle(150,150,50);
setcolor(3);
circle(220,150,50);
setcolor(4);
circle(290,150,50);
setcolor(5);
circle(360,150,50);
getch();
}