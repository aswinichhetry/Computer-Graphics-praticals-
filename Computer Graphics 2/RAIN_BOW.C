#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void rainbow()
{
int g=DETECT,m;
int i,x,y;
initgraph(&g,&m,"C:\\TurboC3\\bgi");
x=getmaxx()/2;
y=getmaxy()/2;
for(i=30;i<200;i++)
{
delay(100);
setcolor(i/10);

arc(x,y,0,180,i-10);
}}
int main()
{
rainbow();
return 0;
}
getch();