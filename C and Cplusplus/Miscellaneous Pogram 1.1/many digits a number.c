#include <stdio.h>
#include<math.h>
void main()
{
    long long n;
    int count=0;
    printf("input Number :");
    scanf("%lld",&n);
    while (n!=0)
    {
        n=n/10;
        ++count;
    }
    printf("Number of digits: %d",count);
    return 0;
}
