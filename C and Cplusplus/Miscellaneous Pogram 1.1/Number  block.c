#include <stdio.h>
int main()
{
    int i, j, rows;
    rows=5;
    /*printf("Enter number of rows: ");
    scanf("%d",&rows);*/
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
