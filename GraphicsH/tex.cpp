#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    //void arc(int x, int y, int start_angle,int end_angle, int radius);
    arc(200,200,0,45,100); this is arch function;

    setcolor(GREEN);
    outtext("Welcome to SEU new campus");

    setcolor(RED);
    outtextxy(50,50,"Today is final exam");



    getch();
    closegraph();
    return 0;
}
