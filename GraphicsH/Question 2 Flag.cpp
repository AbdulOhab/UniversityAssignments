//NAME: MD Abdul Ohab Sarker
//Id: 2019000000061

//Our National flag.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    initwindow(800,700);

    setcolor(GREEN);
    rectangle(50,520,600,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill((50+600)/2,(520+200)/2,GREEN);

    setcolor(RED);
    circle(320, 350, 80);
    setfillstyle(SOLID_FILL,RED);
    floodfill(320,350,RED);

    getch();

}
