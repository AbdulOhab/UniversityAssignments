    #include <stdio.h>
    int main()
    {
       double A,B,C;
       printf("Enter the first number=\n ");
       scanf("%lf", &A);
       printf("Enter the seconds number=\n ");
       scanf("%lf", &B);
       printf("Enter the third number= \n");
       scanf("%lf", &C);



        if( A>=B && A>=C)
        {
            printf("%f is the largest number.",A);
        }

else if(B>=A && B>=C)
        {
            printf("%f is the largest number.",B);
        }
    else
        {
            printf("%f is the largest number.",C);
        }
        //the smallest number from
         if( A<=B && A<=C)
        {
            printf("\n%f is the smallest number.",A);
        }

else if(B<=A && B<=C)
        {
            printf("\n%f is the smallest number.",B);
        }
    else
        {
            printf("\n%f is the smallest number.",C);
        }


return 0;
    }
