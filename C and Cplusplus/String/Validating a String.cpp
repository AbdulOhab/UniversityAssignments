#include <bits/stdc++.h>
using namespace std;

bool valid(char *sor)
{
    int i;
    for(i = 0; sor[i] != '\0'; i++)
    {
        if(!(sor[i] >= 65 && sor[i] <= 90) &&
                !(sor[i] >= 97 && sor[i] <= 122) &&
                !(sor[i+1] <= 48 && sor[i+1] >= 57))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char sor[1000];
    int i, c;
    gets(sor);
    if(valid(sor))
        cout<<"true";
    else
        printf("false\n");
}
