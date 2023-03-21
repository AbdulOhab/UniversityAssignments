#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;
int main()
{ //space counting.
    char s[]="Shsssssssssh ...    I am hunting wabbits.  Heh  Heh  Heh Heh ...";
    int i;
    int c=1;
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]==' ' && s[i-1]==' ')
            c=c+1;

    }
    cout<<c;
    return 0;
}
