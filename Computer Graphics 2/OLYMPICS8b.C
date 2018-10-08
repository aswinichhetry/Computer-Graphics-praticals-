#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int g=DETECT,m;
initgraph(&g,&m,"C:\\TurboC3\\bgi");
setcolor(1);
circle(150,150,50);
setcolor(15);
circle(260,150,50);
setcolor(4);
circle(370,150,50);
setcolor(14);
circle(205,190,50);
setcolor(2);
circle(315,190,50);
getch();
}
