#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");


    int points[] = {80, 40, 40, 100, 120, 100, 80, 40};


    setfillstyle(HATCH_FILL, RED);
    for(int i =0; i < 100; i++)
    {
        circle(100+i,100,80)
        delay(20);

        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
