#include <stdio.h>

int main()
{
    int a,b,c,sum,k[2][3];
    int i[3][2]={{2,3},{2,4},{2,4}};
    int j[3][2]={{3,4},{5,3},{7,4}};


    printf("First matrix  :  \n");

    for(a=0; a<3; a++)
    {
        for(b=0; b<2; b++)
        {
            printf("%d  ",i[a][b]);
        }printf("\n");
    }

        printf("Second matrix  :  \n");

    for(a=0; a<3; a++)
    {
        for(b=0; b<2; b++)
        {
            printf("%d  ",j[a][b]);
        }printf("\n");
    }
            printf("Matrix multiplecation  :  \n");

    for(a=0; a<2; a++)
    {
        for(b=0; b<3; b++)
        {
            sum=0;
            for(c=0; c<2; c++)
            {
                sum+=i[a][c]+j[c][b];
                k[a][b]=sum;
            }
            printf("%d  ",k[a][b]);
        }printf("\n");
    }
    return 0;
}
