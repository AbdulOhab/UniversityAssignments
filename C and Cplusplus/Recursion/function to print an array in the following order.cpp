#include <stdio.h>

void function(int i, int j, int *n, int *a)
{
    if(i==*n)
    {
        *n = j; // resize n
        return;
    }
    if(a[i]%2==0) a[j++] = a[i];
    function(i+1, j, n, a);
}

int main()
{
    int i, n, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    function(0, 0, &n, a);
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
