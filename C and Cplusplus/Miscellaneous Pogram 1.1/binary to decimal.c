#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    long long binary, decimal=0;
    int N=0;

    printf("Enter number: ");

    scanf("%lld", &binary);

    while(binary!=0)
    {
        if(binary%10==1)
        {
            decimal += pow(BASE, N);
        }

        N++;
        binary /= 10;
    }

    printf("Decimal number= %lld", decimal);


    return 0;
}

