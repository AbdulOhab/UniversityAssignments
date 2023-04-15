#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   int max_x = getmaxx();
   int max_y = getmaxx();

   cout << "max = " << max_x << "   and max_y = " << max_y <<endl;

   char buffer[30];

   sprintf(buffer,"%d",max_x);
   outtextxy(100,50, buffer);

   setcolor(RED);
   char buffer2[30];
   sprintf(buffer2,"%d",max_y);
   outtextxy(300,50, buffer2);

   getch();
   closegraph();
   return 0;
}
