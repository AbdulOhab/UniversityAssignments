#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include<stack>
using namespace std;

bool Pair(char opening,char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}
bool balance(string exp)
{
    stack < char > s;

    int i,l;
    l=exp.length();
    for( i = 0; i<l; i++)
    {
        if(exp[i] =='(' || exp[i] == '{' || exp[i] == '[')
             s.push(exp[i]);

        else if(exp[i] ==')' || exp[i] == '}' || exp[i] == ']')
        {
            if(s.empty() || !Pair(s.top(),exp[i]))
                return false;
            else
            s.pop();
        }
    }
//    if(s.top()==NULL)
//        return true ;//1
//    else
//        return false;//0
  return s.empty() ? true:false;
}

int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string exp;
        cin >> exp;
        bool answer = balance(exp);
        if(answer) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

//    string s;
//    cin>>s;
//
//    bool t=balance(s);
//    if(t)
//    {
//        cout<<"YES"<<endl;
//    }
//    else
//    {
//        cout<<"NO"<<endl;
//    }
//
//
//    return 0;
}
