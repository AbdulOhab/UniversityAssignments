#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

   readimagefile("C:/Users/abohab/Desktop/Slide/px.jpg",100,100,400,300);


   getch();
   closegraph();
   return 0;
}

