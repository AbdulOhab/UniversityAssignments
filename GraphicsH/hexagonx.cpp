#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{

    initwindow(800,800);

    int points []= {400,150,500,200,550,360,400,430,300,350,300,200,400,150};
    drawpoly(7,points);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(450,250,WHITE);
    outtextxy(400,300, "HEXAGON");

    getch();
}
