#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");



   getch();
   closegraph();
   return 0;
}
