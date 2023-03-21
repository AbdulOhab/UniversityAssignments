#include<stdio.h>
#include<string.h>
int main()
{

    char str[1000];
    int i;
    i = 0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0')
    {
         i++;
    }

    printf("Characters a string: %d ",i );

}
