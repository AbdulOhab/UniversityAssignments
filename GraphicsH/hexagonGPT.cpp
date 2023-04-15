#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw hexagon
    int x1 = 100, y1 = 100, x2 = 150, y2 = 50, x3 = 200, y3 = 100;
    int x4 = 200, y4 = 150, x5 = 150, y5 = 200, x6 = 100, y6 = 150;

    int p[] = {x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6};
    drawpoly(6, p);

    // Fill hexagon with yellow color
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(150, 125, WHITE);

    // Write text on hexagon
    outtextxy(125, 125, "Hexagon");

    getch();
    closegraph();
    return 0;
}
