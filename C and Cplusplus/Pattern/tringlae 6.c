#include<stdio.h>
int main()
{
    int row,col,n;
    n=10;
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
            printf(" ");

        for(col=1; col<=col; col++)
            printf("* ");
        printf("\n");

    }
    }
