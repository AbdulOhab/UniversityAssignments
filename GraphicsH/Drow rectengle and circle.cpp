#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
//   int gd,gm;
//   detectgraph(&gd, &gm);
//   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   initwindow(800,700);

   setcolor(GREEN);
   rectangle(10,20,150,200);
   setfillstyle(SOLID_FILL,GREEN);
   floodfill((10+150)/2,(20+220)/2,GREEN);


   setcolor(YELLOW);
   circle(300, 200, 100);
   setfillstyle(SOLID_FILL,YELLOW);
   floodfill(300,200,YELLOW);
   getch();

}

