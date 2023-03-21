#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=6;
    int table[6][4] =  {{1001, 06, 11, 1999},
                        {1002, 21,  9, 2000},
                        {1003, 17,  1, 2001},
                        {1004,  3,  5, 1999},
                        {1005, 21,  9, 2000},
                        {1006, 12,  1, 2001}};

    auto compare_data = [&](int x, int y){
    if(table[x][3]==table[y][3]){
    if(table[x][2]==table[y][2]){
    if(table[x][1]==table[y][1]){
    if(table[x][0]==table[y][0])
         return false;
    else return table[x][0]>table[y][0];}
    else return table[x][1]>table[y][1];}
    else return table[x][2]>table[y][2];}
    else return table[x][3]>table[y][3];};

    auto swap_data = [&](int x, int y){
        table[x][0] ^= table[y][0] ^= table[x][0] ^= table[y][0];

        table[x][1] ^= table[y][1] ^= table[x][1] ^= table[y][1];

        table[x][2] ^= table[y][2] ^= table[x][2] ^= table[y][2];

        table[x][3] ^= table[y][3] ^= table[x][3] ^= table[y][3];
    };
//bubble sort
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1; j<n; j++)
        if(compare_data(mini,j))
        mini=j;
        swap_data(i, mini);
        }

    cout<<"\nSorted data : \n"<<"ID\t"<<"DATE\t"<<"MONTH\t"<<"YEAR\n";
    for(int i=0; i<n; i++)
        for(int j=0; j<4; j++)
            cout<<table[i][j]<<"\t\n"[j==3];
    return 0;
}
///Assignment SET-B
///Name:Abdul Ohab
///ID:2019000000061
