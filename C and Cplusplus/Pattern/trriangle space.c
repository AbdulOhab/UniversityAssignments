#include<stdio.h>

int main()
{
    int i, j;
    int n=10 ;
     for (i = 1; i <=n; i++)
    {

        for (j = 1; j <=n; j++)
        {
            if (j == 1  || i== n  || j==i)
                printf("*");
            else
                printf(" ");
        }
         printf("\n");
    }
    return (0);
}
