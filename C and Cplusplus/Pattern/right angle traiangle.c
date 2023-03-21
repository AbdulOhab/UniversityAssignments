#include<stdio.h>

int main()
{
    int i, j,d=0;
    int n=4 ;
     for (i = 1; i <=n; i++)
    {

        for (j = 1; j <=i; j++)
        {
                printf("%d ",++d);
        }
         printf("\n");
    }
    return (0);
}
