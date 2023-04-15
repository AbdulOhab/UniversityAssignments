#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   int points[] = {100, 100, 200, 200, 100, 200, 100, 100};

   setcolor(GREEN);
   drawpoly(4,points);

   setfillstyle(LINE_FILL, GREEN);
   floodfill((int)((100+200+100)/3),(int)((100+200+200)/3),GREEN);

//   fillpoly(4, points);
   getch();
   closegraph();
   return 0;
}


