#include<stdio.h>
int main()
{
    int a,row,coll;
    a=9;
//scanf("%d",&a);
    for (row=1; row<=a; row++)
    {
        for(coll=1; coll<=row; coll++)
        {
            printf(" n ");
        }
        printf("\n");
    }
    for (row=a-1; row>=1; row--)
    {
        for(coll=1; coll<=row; coll++)
        {
            printf(" # ");
        }
        printf("\n");
    }
    return 0;
}


