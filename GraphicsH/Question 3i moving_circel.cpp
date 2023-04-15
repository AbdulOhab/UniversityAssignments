//NAME: MD Abdul Ohab Sarker
//Id: 2019000000061

//The circle should appear to move from left to right and then right to left and this
//pattern continues.
#include <iostream>
#include <graphics.h>

using namespace std;

int main()
{

    int gd, gm;

    detectgraph(&gd, &gm);
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    int point[] = {20,30, 5,150, 50,120, 20,30};

    setcolor(RED);

    while(1)
    {
        for(int i = 0; i<=200; i++)
        {
            circle(100+i,100,80);
            delay(20);
            cleardevice();
        }
        for(int i = 200; i>=0; i--)
        {
            circle(100+i,100,80);
            delay(20);
            cleardevice();
        }

    }

    getch();
    return 0;
}
