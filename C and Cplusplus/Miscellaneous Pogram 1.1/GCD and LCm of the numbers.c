#include <stdio.h>

int gcd_fast(int a, int b)
{
    if (b == 0)
        return a;
    return gcd_fast(b, a % b);
}

long long lcm_fast(int a, int b)
{
    return a / gcd_fast(a, b) * b;
}

int main()
{
    int n1,n2,n,gcd,lcm,rem,num1,num2;

    printf("enter two integers:");
    scanf("%d %d", &num1,&num2);

    n1=num1;
    n2=num2;
    //Gcd
    /*for (n=1; n<=n1 &&n<+n2; n++)
    {
        if(n1%n==0 && n2%n==0)
            gcd=n;
    }*/
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm = (n1*n2)/gcd;
    printf("G.C.D is %d\n",n1);
    printf("The LCM is %d\n",lcm);
    return 0;
}

