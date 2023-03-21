#include<stdio.h>
int main()
{

    int a[10][10] ;
    int row,col;
    int i,j ;
    for(j=1; j<=10; j++)
    {
        for(i=0; i<10; i++)
        {
            row = i+1 ;
            for(j=1; j<=10; j++)
            {
                col = j ;
                a[i][j]=row*col ;
                printf("%d\t",a[i][j]);
            }

            printf("\n");
        }
        return 0;
    }
}
