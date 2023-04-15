//netinal Flag
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    setcolor(2); /* Flag's Rectangle */
    rectangle(200,150,400,250);
    setfillstyle(1,2);
    floodfill(325,225,2);
    delay(1000);

    setcolor(4); /* Flag's Circle */
    circle(300,200,30);
    setfillstyle(1,4);
    floodfill(300,200,4);
    delay(1000);

    getch();
    closegraph();
    return 0;

}
//Hexagonm
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\");

    int np=4,tri[8]= {200,50,150,100,250,100,200,50};
    int hex[14]= {400,50,450,50,500,100,450,150,400,150,350,100,400,50};
    np=7;
    drawpoly(np,hex);
    getch();
    closegraph();
}
//tt

#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{

int gd, gm;

detectgraph(&gd, &gm);
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

int point[] = {20,30, 5,150, 50,120, 20,30};

setcolor(YELLOW);
drawpoly(4,point);

int rect[] = {20,30, 5,150, 50,120, 40,30, 20,30};

setcolor(YELLOW);

for(int i = 0; i<=200; i++)
{
circle(100+i,100,80);
delay(20);
cleardevice();
}

getch();
return 0;
}
