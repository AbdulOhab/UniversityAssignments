//Template
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
//Drow Line
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int  main() {
    int gdriver = DETECT, gmode;
    int x1 = 200, y1 = 200;
    int x2 = 300, y2 = 300;
    char driver[] =  "";
    initgraph(&gdriver, &gmode,driver);
    line(x1, y1, x2, y2);
    getch();
    closegraph();
}
//Triangle
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

//Bnagladeshi Flag
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
//   int gd,gm;
//   detectgraph(&gd, &gm);
//   initgraph(&gd, &gm, "C://TURBOC3//BGI");

    initwindow(800,700);

    setcolor(GREEN);
    rectangle(50,520,600,200);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill((50+600)/2,(520+200)/2,GREEN);


    setcolor(RED);
    circle(320, 350, 80);
    setfillstyle(SOLID_FILL,RED);
    floodfill(320,350,RED);

    //Create Stand . . . . . . . . . . . ..
    rectangle(30,620,49,180);
    rectangle(10,410,220,20);
    rectangle(20,420,230,30);

    getch();



}
//line and Triangle
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


//Rectangle
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

//max x and min y value
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

//DrowCircel
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

//   setcolor(RED);

   //circle : x = 250, y = 250, radius = 100
   circle(250,250,100);

   //void setfillstyle(int pattern, int color);
   //pattern = HATCH_FILL, Color = RED
   setfillstyle(HATCH_FILL, RED);

   //void floodfill(int x, int y, int border_color)
   //   x = (left + right) / 2
   //   y = (top + bottom) / 2
   floodfill(250,250,WHITE);

   getch();
   closegraph();
   return 0;
}

//Image
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

//Drowploy and fillploy
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

//2D and 3D bar
#include<iostream>
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

//Text
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
    int gd,gm;
    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C://TURBOC3//BGI");

    //void arc(int x, int y, int start_angle,int end_angle, int radius);
    arc(200,200,0,45,100); this is arch function;

    setcolor(GREEN);
    outtext("Welcome to SEU new campus");

    setcolor(RED);
    outtextxy(50,50,"Today is final exam");



    getch();
    closegraph();
    return 0;
}

// Triangle with color
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


// Triangle animation 
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main() {
   int gd,gm;
   detectgraph(&gd, &gm);
   initgraph(&gd, &gm, "C://TURBOC3//BGI");

//   int points[] = {100, 100, 200, 200, 100, 200, 100, 100};

   int points[] = {80, 40, 40, 100, 120, 100, 80, 40};

//   drawpoly(4,points);

    for(int i =0; i < 100; i++){
        drawpoly(4,points);

        points[0]++;
        points[2]++;
        points[4]++;
        points[6]++;

        delay(20);

        cleardevice();
    }




   getch();
   closegraph();
   return 0;
}
