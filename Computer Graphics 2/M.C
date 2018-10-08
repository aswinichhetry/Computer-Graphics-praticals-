#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int i,r,x=0,y,xc,yc;
float d;
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
printf("Enter Radious\n");
scanf("%d",&r);
printf("Enter the center value of circle");
scanf("%d",&xc);
scanf("%d",&yc);
d=1.25-r;
y=r;
{
if(d<0.0)
{
x=x+1;
d=d+2*x+1;
}
else
{
x=x+1;
y=y-1;
d=d+2*x-2*y+10;
}
putpixel(xc+x,yc+y,1);
putpixel(xc-y,yc-x,2);
putpixel(xc+y,yc-x,3);
putpixel(xc-x,yc+x,4);
putpixel(xc+y,yc+x,5);
putpixel(xc-x,yc-y,6);
putpixel(xc+x,yc-y,7);
putpixel(xc-x,yc+y,8);
}
while(x<y);
getch();
}







