#include<stdio.h>
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void main()
{
    int x=10, y=7;
    printf("Before swap: %d %d\n", x, y);
    swap(&x, &y);
    printf("After swap: %d %d", x, y);
}
