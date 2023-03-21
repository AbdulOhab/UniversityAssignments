#include<stdio.h>
int main()
{
    int i, j, rows,x;
    //printf("Enter number of rows: ");
    //scanf("%d", &rows);
    rows=5;
    for (i=1;i<=rows; i++)
    {

        for (x=1; x<=rows; x++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
