#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int ROW,COL;
    scanf("%d %d",&ROW,&COL);
    int arr[ROW][COL], i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Earr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
