#include <stdio.h>

void SMax(int i, int n, int *a, int *fbest, int *sbest)
{
    if(i==n-1)
    {
        *fbest = a[i];
        return;
    }
    if(*sbest < a[i]) *sbest = a[i];
    SMax(i+1, n, a, fbest, sbest);
    if(a[i] > *fbest)
    {
        *sbest = *fbest;
        *fbest = a[i];
    }
    else if(a[i] > *sbest) *sbest = a[i];
}

int main()
{
    int n, i, a[100];
    int fbest, sbest;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    sbest = fbest = a[0];
    SMax(0, n, a, &fbest, &sbest);
    printf("%d\n", sbest);
    return 0;
}
