//program for font animation//

#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm,x=600,i;
initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
for(;;x++)
{
  x %= 250;
  setcolor(random(16));

  circle(random(635),random(70),50);
  circle(random(635),random(70),50);
  circle(random(635),random(70),50);
  circle(random(635),random(70),50);
  circle(random(635),random(70),50);

  clearviewport();

  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(50,415-2*x,"*MOHAMMAD*");
  setcolor(GREEN);
  outtextxy(200,415-2*x,"*SADDAM*");
  setcolor(YELLOW);
  settextstyle(3,0,5);
  outtextxy(350,415-2*x,"*ANSARI*");
}}
getch();
