#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int g=DETECT,m;
int s;
initgraph(&g,&m,"C:\\TurboC3\\bgi");
for(s=0;s<=400;s=s+10)
{
setcolor(3);
circle(300+s,200,100);
setcolor(14);
circle(300+s,200,70);
line(300+s,130,300+s,270);
line(230+s,200,370+s,200);
delay(200);
if(s==400)
break;
cleardevice();
}
getch();
}