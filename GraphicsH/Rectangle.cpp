#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   setcolor(GREEN);

   //rectangle : left = 200, top = 200, right = 450, bottom = 450
   rectangle(150,150,400,400);

   //void setfillstyle(int pattern, int color);
   setfillstyle(SOLID_FILL, GREEN);

   //void floodfill(int x, int y, int border_color)
//   x = (left + right) / 2
//   y = (top + bottom) / 2
   floodfill((150+400)/2,(150+400)/2,GREEN);

   getch();
   closegraph();
   return 0;
}
