#include<stdio.h>
void main()
{
    int x[4]= {10, 2, 4, 8}, *y;
    y=&x[0];
    printf("print address in y = %d\n", y);
    printf("print value in y = %d\n", *y);
    y++;
    printf("print address in y = %d\n", y);
    printf("print value in y = %d\n", *y);
    y++;
    printf("print value in y = %d\n", *y);
    y++;
    printf("print value in y = %d\n", *y);
}
