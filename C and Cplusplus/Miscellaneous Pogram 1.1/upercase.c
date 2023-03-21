#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    int i,len;
    printf("\n Enter string : ");
    gets(str);
    len=strlen(str);
    for(i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A' &&str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("\n Converted string is %s",str);
    return 0;
}
