#include <stdio.h>
void tower(int n, char s, char m, char d)
{
    if(n>0)
    {
        tower(n-1, s, d, m);
        printf("%c -> %c\n", s, d);
        tower(n-1, m, s, d);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    tower(n, 'a', 'b', 'c');
    return 0;
}
