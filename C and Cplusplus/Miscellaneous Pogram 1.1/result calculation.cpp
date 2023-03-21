//result calculation
#include <bits/stdc++.h>
using namespace std;

float average(float sum,float c)
{
    return sum/c;
}

float CGPA(float k,float c)
{
    return k/c;
}

int main()
{
    int p=1;

    while(p==1)
    {
        int i,c=0,z,fail=0;
        float i1,y,n, k=0,sum=0;

        printf("How many subject?\n");
        scanf("%d",&z);
        printf("Enter %d Subject marks here:\n",z);

        for (i=0; i<z; i++)
        {
            scanf("%f",&n);
            sum=sum+n;
            if(n>=80)
                i1 = 4.00;
            else if(n>=75 && n<80)
                i1 = 3.75;
            else if(n>=70 && n<75)
                i1=3.50;
            else if(n>=65 && n<70)
                i1=3.25;
            else if(n>=60 && n<65)
                i1=3.00;
            else if(n>=55 && n<60)
                i1=2.75;
            else if(n>=50 && n<55)
                i1=2.50;
            else if(n>=45 && n<50)
                i1=2.25;
            else if(n>=40 && n<45)
                i1=2.00;
            else if(n<40)
            {
                i1=0.00;
                fail++;
            }
            k= k+i1;
            c++;
        }

        printf("\n\nTotal marks is :%0.2f",sum);

        printf("\n\nAverage:%0.2f",average(sum,c));
        y=k/c;
        if(fail==0)
        {
            if(y>=4.00)
                printf("\n\nyour grade is:A+");
            else if(y>=3.75 && y<4.00)
                printf("\n\nyour grade is:A");
            else if(y>=3.5 && y<3.75)
                printf("\n\nyour grade is:A-");
            else if(y>=3.25 && y<3.5)
                printf("\n\nyour grade is:B+");
            else if(y>=3.00 && y<3.25)
                printf("\n\nyour grade is:B");
            else if(y>=2.75 && y<3.00)
                printf("\n\nyour grade is:C+");
            else if(y>=2.50 && y<2.75)
                printf("\n\nyour grade is:C");
            else if(y>=2.25 && y<2.50)
                printf("\n\nyour grade is:D+");
            else if(y>=2.00 && y<2.25)
                printf("\n\nyour grade is:D");
        }
        else
            printf("\n\nyour grade is:F");
        if(fail==0)
        {
            printf("\nCGPA\n");
            printf("%0.2f\n", CGPA(k,c));
        }
        if(fail!=0 && fail!=z)
        {
            printf("\n\nyou fail in %d subject\n",fail);
        }
        if(fail==z)
        {
            printf("\nYou fail in all subjects\n");
        }
        printf("\n\nDo you want to run again?\n\t1.Yes\n\t2.No\n");
        scanf("%d",&p);
    }
}



