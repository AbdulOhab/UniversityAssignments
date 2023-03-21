#include<stdio.h>
int main()
{
    int i, j, rows,x;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i=rows;i>=1; i--)
    {
        for (j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for (x=1; x<=i; x++)
        {
            printf("*",x+64);
        }
        printf("\n");
    }
    return 0;
}
