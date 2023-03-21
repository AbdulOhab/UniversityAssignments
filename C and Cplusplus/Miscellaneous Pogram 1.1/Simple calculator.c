#include<stdio.h>
void main()
{
    int add(), sub(), mult(), div(), fac(), modulus(), sqr(); //declaring four function
    int n;
    while(1) //this loop expression never become false
    {
        printf("\nenter the operator\n\n1 for +\n2 for -\n3 for *\n4 for\n5 for !\n6 for \%% \n7 for square\n8 for exit\n\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            add(); //calling function
            break;
        case 2:
            sub(); //calling function
            break;
        case 3:
            mult(); //calling function
            break;
        case 4:
            div(); //calling function
            break;
        case 5:
            fac();
            break;
        case 6:
            modulus();
            break;
        case 7:
            sqr();
            break;
        case 8:
            exit(0); //this function is used to terminate the program because in while
            //loop(1) is used
        }
    }
}
int add() //calling add function
{
    float a,b,c;
    printf("enter the numbers: ");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("%0.2f + %0.2f = %0.2f",a,b,c);

    return (0); //nothing to return
}
int sub()
{
    float a,b,c;
    printf("enter the numbers: ");
    scanf("%f%f",&a,&b);
    c=a-b;
    printf("%0.2f - %0.2f= %0.2f",a,b,c);

    return(0);
}
int mult()
{
    float a,b,c;
    printf("enter the numbers: ");
    scanf("%f%f",&a,&b);
    c=a*b;
    printf("%0.2f x %0.2f= %0.2f",a,b,c);

    return(0);
}
int div()
{
    float a,b,c;
    printf("enter the numbers: ");
    scanf("%f%f",&a,&b);
    c=a/b;
    printf("%0.2f / %0.2f= %0.2f",a,b,c);

    return(0);
}
int fac()
{
    int i=1,f=1,num;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(i<=num)
    {
        f=f*i;
        i++;
    }
    printf("Factorial of %d is : %d",num,f);

    return(0);
}
int modulus()
{
    int a,b,d=0;
    printf("\nEnter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    d=a%b;
    printf("\nModulus of entered number=%d\n",d);

    return 0;
}
int sqr()
{
    int a,b=0;
    printf("\nEnter a number :");
    scanf("%d",&a);
    b=a*a;
    printf("\nSquare of %d is %d",a,b);

    return 0;
}
