#include <graphics.h>

int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    int x1 = 300, y1 = 250, x2 = 350, y2 = 300, x3 = 400, y3 = 250;
    int x4 = 350, y4 = 200, x5 = 300, y5 = 250, x6 = 400, y6 = 250;

    int points[] = {x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6};


    line(160,80,240,80);
    line(240,80,280,160);
    line(280,160,240,240);
    line(240,240,160,240);
    line(160,240,120,160);
    line(120,160,160,80);

    setfillstyle(SOLID_FILL,YELLOW);
    floodfill(170,90,YELLOW);


    setcolor(RED);
    outtextxy(150, 200, "Hexagon");

    getch();
    closegraph();

    return 0;
}


