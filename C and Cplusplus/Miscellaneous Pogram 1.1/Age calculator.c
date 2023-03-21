#include<stdio.h>
int v(int i,int h)//use a function
{
    int t=i*12+h;
    return t;// call the function
}
int main()
{
    while(1)
    {
        int a,b,c,d,e,f,g,h,i,j,k,m,y,yes,month,day,hour,min,sec; //declaration of
        int variables;
        printf("enter current year:\n");
        scanf("%d",&a); // taking current year from user
        printf("enter current month:\n");
        scanf("%d",&b);// taking current month from user
        printf("enter current day:\n\n");
        scanf("%d",&c);// taking current day from user
        printf("Now enter your born year:\n");
        scanf("%d",&d);// taking born year from user
        printf("Now enter your born month:\n");
        scanf("%d",&e);// taking born month from user
        printf("Now enter your born day:\n\n");
        scanf("%d",&f);// taking born day from user
        {
            if(f>c)// if born day is greater than current day
            {
                c=c+30;//current day (+30)
                e=e+1;//born month (+1)
            }
            if(e>b)// if born month is greater than current month
            {
                b=b+12;//current month (+12)
                d=d+1;//born year (+1)
            }
        }
        g=c-f; /* day */
        h=b-e; /* month*/
        i=a-d; /* year*/


        printf("************************************************************\n\n");
        printf("your age is :\t");
        printf("day %d ",g);//show day
        printf("month %d ",h);//show month
        printf(" year %d \n\n",i);//show year
        printf("************************************************************\n\n");
        printf("Do you want to know anything else about your age ?\n\n");
        printf("1. if yes press ( 1 )\n\n" );//show instruction
        printf("2. if no press ( 2 )\n\n" );//show instruction
        printf("************************************************************\n\n");
//this statement will ask user to give input
        scanf("%d",&m);
        if(m==1)//if user press (1)
        {
            month=v(i,h); // total age in month
            day=(i*12+h)*30+g; // total age in day
            hour=((i*12+h)*30+g)*24; // total age in hour
            min =((i*12+h)*30+g)*24*60;// total age in minute
            sec=((i*12+h)*30+g)*24*60*60;// total age in second
            printf("Your age in month : %d\n\n",month);//show total age in month
            printf("Your age in day : %d\n\n",day);// show total age in day
            printf("Your age in hour : %d\n\n",hour);// show total age in hour
            printf("Your age in minute: %d\n\n",min);//show total age in minute
            printf("Your age in second: %d\n\n",sec);//show total age in second
        }
        printf("************************************************************\n\n");
        printf("Do you want to calculate another age? \n\n");
        printf("1. if yes press ( 1 )\n\n" ); //show instruction
        printf("2. if no press ( 0 )\n\n" );//show instruction
        scanf("%d",&y);
        if (y==0)
        {
            printf("\t Y O U A R E W E L C O M E \t\n\n");
            return 0;
        }
    }
}
