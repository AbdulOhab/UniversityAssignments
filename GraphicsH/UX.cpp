
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

//drawpoly(5, rect);

int max_x = getmaxx();
int max_y = getmaxy();

cout << "maximum x = " << max_x << endl;

cout << "maximum y = " << max_y << endl;

char text_x[30];
char text_y[30];

//sprintf(text_x, "%d", max_x);
//sprintf(text_y, "%d", max_y);

outtextxy(20,30,text_x);
outtextxy(30,50,text_y);

outtextxy(70,40, "Graphics lab is very easy");

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
