#include<stdio.h>
int main()
{
    int i, j, rows,x;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    rows=5;
    for (i=1;i<=rows; i++)
    {
        for (j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for (x=1; x<=i; x++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
     for (i=rows-1;i>=1; i--)
    {
        for (j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for (x=1; x<=i; x++)
        {
            printf("%c",i+64);
        }
        printf("\n");
    }
    return 0;
}