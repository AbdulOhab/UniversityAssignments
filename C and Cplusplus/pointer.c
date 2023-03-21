#include<stdio.h>
int main()
{

 int x=10,y=20;
 int *p,*q;
 p =&x;
 q =&y;
 printf("x= %d\n", *(int*)p);
 printf("y=%f\n",*(float*)q);
 return 0;
 }
