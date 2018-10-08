//program for fixed point translation & fixed point scaling

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void main()
{
    int gd=DETECT,gm,x,y,ch;
    char p[10];
    int i,t;
    clrscr();
    initgraph(&gd,&gm,"C:\\TurboC3\\bgi");
    setbkcolor(BLUE);
    outtextxy(480,400,"x");
    outtextxy(150,90,"y");
    line(150,100,150,400);
    line(150,400,470,400);
    outtextxy(140,405,"0");
    for(i=0,t=25;i<12;i++)
    {
        itoa(i+1,p,10);
        outtextxy(150+t,410,p);
        line(150+t,400,150+t,405);
        itoa(i+1,p,10);
        outtextxy(130,400-t,p);
        line(150,400-t,145,400-t);
        t+=25;
    }
    setcolor(5);
    line(250,200,350,200);
    line(250,200,300,300);
    line(300,300,350,200);
    x=(250+350+300)/3;
    y=(200+200+300)/3;
    putpixel(x,y,10);
    printf("Enter your choice");
    printf("\npress 1: fixed point Traslation");
    printf("\npress 2: fixed point Scaling");
    printf("\nchoice=");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1: setcolor(RED);
        setlinestyle(2,0,2);
        line(150,467,200,367);
        line(100,367,150,467);
        line(100,367,200,367);
        getch();
        setbkcolor(RED);
        setcolor(YELLOW);
        line(200,350,150-67,400);
        line(200,350,200,450);
        line(200,450,150-67,400);
        setcolor(YELLOW);
        getch();
        setbkcolor(RED);
        line(300-67,233,350,183);
        line(350,183,350,283);
        line(350,283,300-67,233);
        break;

    case 2: setcolor(RED);
        setlinestyle(2,0,2);
        line(150,467,200,367);
        line(100,367,150,467);
        line(100,367,200,367);
        getch();
        setcolor(YELLOW);
        line(150,447,180,377);
        line(180,377,120,377);
        line(120,377,150,447);
        setbkcolor(RED);
        getch();
        setcolor(YELLOW);
        line(270,210,330,210);
        line(270,210,300,280);
        line(300,280,330,210);
        getch();
        break;
    default : exit(0);
          break;
    }
    getch();
}