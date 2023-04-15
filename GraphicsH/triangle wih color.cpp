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
   line(20, 30, 300, 20);
   setcolor(GREEN);
   line(20, 30, 40, 100);
   setcolor(WHITE);
   line(300, 20, 40, 100);
   setcolor(RED);

//   setfillstyle(SOLID_FILL,YELLOW);
//   floodfill((20+40+300)/3,(30+20+100)/3,GREEN);
   getch();
   closegraph();
   return 0;
}

