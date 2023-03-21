#include <stdio.h>
float male(float w,int h,int a) //Function for male
{
    float b=66.5+(13.75*w)+(5.003*(2.54*h))-(6.755*a);
    return b;
}
float female(float w,int h,int a) //Function for female
{
    float b=655+(9.563*w)+(1.850*(2.54*h))-(4.676*a);
    return b;
}
int main() //Program name
{
    int i=1,hight,age,gender,activity,stop; //Variable declaration
    float weight,bmi,tdee; //Variable declaration
    char n[30]; //Array declaration
    printf("\t\t\t\t***DIET RESULT***\n\n");
    while(i) //Using Loop
    {
        printf("\n\nPlease Enter Your\n");
        printf("Nick Name :");
        scanf("%s",&n); //Data scanning
        printf("\nWeight(kgs) :");
        scanf("%f",&weight); //Data scanning
        printf("\nHeight(inches) :");
        scanf("%d",&hight); //Data scanning
        printf("\nAge(years) :");
        scanf("%d",&age); //Data scanning
        printf("\nActivity Level :\n1.Sedentary: Little or no Exercise/Desk job\n2.Lightly active: Light exercise/sports 1-3 days/week\n");
        printf("3.Moderately active: Moderate exercise/sports 3-5 days/week\n4.Very active: Heavy exercise/sports 6-7 days/week\n");
        printf("5.Extremely active: Very heavy exercise/physical job/training 2x/day\n");
        printf("\nPress (1) or (2) or (3) or (4) or (5)\n");
        scanf("%d",&activity); //Data scanning
        printf("\nGender :\n1.Male\n2.Female\n");
        printf("\nPress (1) or (2)\n");
        scanf("%d",&gender); //Data scanning
        if(gender==1) //Condition
        {
            bmi=male(weight,hight,age); //Function call for male
            if(activity==1) //Condition
                tdee=bmi*1.2; //calculation
            else if(activity==2) //Condition
                tdee=bmi*1.375; //Calculation
            else if(activity==3) //Condition
                tdee=bmi*1.55; //Calculation
            else if(activity==4) ////Condition
                tdee=bmi*1.725; //Calculation
            else
                tdee=bmi*1.9; //Calculation
            printf("\n%s You Need [ %.2f ] calories/day to Maintain Your Current Weight.\n",n,tdee);
        }
        if(gender==2) //Condition
        {
            bmi=female(weight,hight,age); //Function call for female
            if(activity==1) //Condition
                tdee=bmi*1.2; //Calculation
            else if(activity==2) //Condition
                tdee=bmi*1.375; //Calculation
            else if(activity==3) //Condition
                tdee=bmi*1.55; //Calculation
            else if(activity==4) //Condition
                tdee=bmi*1.725; //Calculation
            else
                tdee=bmi*1.9; //Calculation
            printf("\n%s You Need [ %.2f ] calories/day to Maintain Your Current Weight.\n",n,tdee);
        }
        printf("\nPress (0) to Stop this Application. Or Press (1) to Calculate Again.\n");
        scanf("%d",&stop); //Scanning data
        if(stop==0) //Condition
            break;
    }
    printf("\n\t\t\t** Thank You **\n\n");
}
