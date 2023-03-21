#include<cstdio>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
    char string[] = "Great responsibility";
    int count;

    for(int i = 0; i < strlen(string); i++)
    {
        count = 1;
        for(int j = i+1; j < strlen(string); j++)
        {
            if(string[i] == string[j] && string[i] != ' ')
            {
                count++;
            }
        }
        if(count > 1 && string[i] != '0')
            printf("%c\n", string[i]);
    }

    return 0;
}
