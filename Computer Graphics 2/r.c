#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main()
{
int x1=100,x2=100,y1=100,y2=300,x12,y12,x22,y22;
float a=1.57;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
setcolor(5);
line(x1,y1,x2,y2);
while(!kbhit())
{
for(float i=0;i<628;i+=0.1)
{
setcolor(5);
x12=x1*cos(i)-y1*sin(i);
x22=x2*cos(i)-y2*sin(i);
y12=x1*sin(i)+y1*cos(i);
y22=x2*sin(i)+y2*cos(i);
line(x12,y12,x22,y22);
delay(200);
}}
getch();
}