#include <stdio.h>
void funny()
{
    char ch;
    scanf("%c", &ch);
    if(ch!='\n')
        funny();
    printf("%c", ch);
}

int main()
{
    funny();
    printf("\n");
    return 0;
}
