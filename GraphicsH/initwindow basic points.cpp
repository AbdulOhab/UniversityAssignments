#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
    //initwindow(500,500); // x = 250, y= 250
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    getch();
}
