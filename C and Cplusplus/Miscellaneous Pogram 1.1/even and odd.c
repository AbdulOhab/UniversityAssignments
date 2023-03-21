#include<stdio.h>

void main()
{
    int a;
    printf("\nEnter a number ");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d Even. ", a);
    else
        printf("%d odd.", a);


    if (a%2!=0)
        printf("%d odd. ", a);
    return 0;

}
