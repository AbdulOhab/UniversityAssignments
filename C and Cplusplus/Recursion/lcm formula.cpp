#include <stdio.h>

int lcm(int a, int b, int m)
{
    if(a*m % b == 0)
       return a*m;
    return lcm(a, b, m+1);
}

int main()
{
    int a, b, l;
    scanf("%d %d", &a, &b);
    l = lcm(a, b, 1);
    printf("%d\n", l);
    return 0;
}
