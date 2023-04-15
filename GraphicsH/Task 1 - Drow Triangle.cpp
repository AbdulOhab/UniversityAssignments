#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
//   int gd,gm;
//   detectgraph(&gd, &gm);
//   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   initwindow(800,700,"Triangle");
   setcolor(GREEN);

   //90 degree angle triangle
   line(220, 110, 220, 480);
   line(220, 110, 690, 490);
   line(220, 480, 690, 490);

   setfillstyle(SLASH_FILL,GREEN);
   floodfill((220+220+690)/3,(480+490+110)/3,GREEN);
   getch();

}

