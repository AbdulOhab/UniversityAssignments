#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");



    // line for x1, y1, x2, y2
    line(20, 30, 400, 80); //AB x1 = 20, x2 = 400, y1 = 30, y2 = 80
    setcolor(YELLOW);
    line(20, 30, 70, 100); //AC x3 = 70 , y3 = 100
    setcolor(BLUE);
    line(400, 80, 70, 100); //BC
    setcolor(RED);




    setfillstyle(SLASH_FILL,GREEN);
//    floodfill((20+400+400)/3,(30+80+100)/3,GREEN);

    getch();

}


