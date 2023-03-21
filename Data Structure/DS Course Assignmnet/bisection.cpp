#include <stdio.h>
double f(double x)
{
    return x*x-x-2;
}
int main()
{
    double x1 = 1, x2 = 3, x0 ;
    int step = 1 ;
    while(step<=100)
    {
        x0 = (x1+x2)/2;
        if(f(x0)==0) break ;
        if(f(x1)*f(x0)<0) x2 = x0;
        else x1 = x0;
        step++;
    }
    printf("Root = %llf\n",x0);
    return 0;
}
