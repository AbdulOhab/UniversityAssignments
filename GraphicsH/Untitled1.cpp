#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int  main() {
    int gdriver = DETECT, gmode;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    char driver[] =  "";
    initgraph(&gdriver, &gmode,driver);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}

