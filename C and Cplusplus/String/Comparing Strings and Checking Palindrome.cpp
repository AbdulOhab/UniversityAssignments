//Comparing Strings and Checking Palindrome
#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int stringCompare(char a[], char b[])
{
    int i = 0, flag = 0;
    while(a[i] != '\0' && b[i] != '\0')
    {
        if(a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0 && a[i] == '\0' && b[i] == '\0')
        return 1;
    else
        return 0;
}
//int stringCompare(char[], char[]);
int main()
{

    char aj1[]="123";
    char aj2[]="123";
    int compare;

    compare = stringCompare(aj1, aj2);  // function call

    if(compare == 1)
        printf("exactly same\n");
    else
        printf("are different.\n");
    return 0;
}


