 #include <stdio.h>

int main()
{
    long int multiplyNumbers(int n);
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("%d",n);
}
long int multiplyNumbers(int n)
{
    if (n == 1)
        printf("%d",n);
    else
         multiplyNumbers(n+1);
        printf("%d",n);
}
