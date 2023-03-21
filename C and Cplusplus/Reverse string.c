#include<stdio.h>
#include<string.h>
int main()
{
    char str[80];
    int i=0;
    printf("\n Enter string : ");
    gets(str);
    for(i=strlen(str); i>=0; i--)
        printf("%c",str[i]);
    return 0;
}
