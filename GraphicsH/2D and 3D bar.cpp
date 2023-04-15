//2D and 3D bar
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   //void bar(int left, int top, int right, int bottom);
   bar(40,40,200,100);

//   void bar3d(int left, int top, int right,
//    int bottom, int depth, int topflag);
   bar3d(40,40,200,100,50,1);

   getch();
   closegraph();
   return 0;
}

