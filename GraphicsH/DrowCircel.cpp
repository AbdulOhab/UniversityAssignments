#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

//   setcolor(RED);

   //circle : x = 250, y = 250, radius = 100
   circle(250,250,100);

   //void setfillstyle(int pattern, int color);
   //pattern = HATCH_FILL, Color = RED
   setfillstyle(HATCH_FILL, RED);

   //void floodfill(int x, int y, int border_color)
   //   x = (left + right) / 2
   //   y = (top + bottom) / 2
   floodfill(250,250,WHITE);

   getch();
   closegraph();
   return 0;
}


