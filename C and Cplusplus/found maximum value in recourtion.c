#include <stdio.h>
///found maximum value in recourtion
int Max(int i, int n, int *a)
{
    int m;
    if(i==n-1)
        return a[i];
    m = Max(i+1, n, a);
    return ((a[i] > m)? a[i] : m);
}

int main()
{
    int n, i, m, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    m = Max(0, n, a);
    printf("%d\n", m);
    return 0;
}

