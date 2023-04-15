#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "c:\\tc\\bgi");

   line(300, 100, 200, 200);
   line(300, 100, 400, 200);
   line(200, 200, 400, 200);


   setcolor(YELLOW);
   line(40, 30, 200, 75);
   setcolor(RED);
   line(300, 100, 400, 200);
   setcolor(GREEN);
   line(200, 75, 400, 200);


   getch();
   closegraph();
}

