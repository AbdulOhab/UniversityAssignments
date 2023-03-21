#include <iostream>
#include <map>
using namespace std;
int main() {
    map< string, int  > amarMap;
    string str;

    for (int i=0;i<10;i++){
        cin >> str;
        amarMap[str] ++;
    }

    cout << "Chittagong vote diche " << amarMap["Chittagong"] << " jon\n";
    cout << "Dhaka vote diche " << amarMap["Dhaka"] << " jon\n";
    cout << "Rangpur vote diche " << amarMap["Rangpur"] << " jon\n";
    cout << "Sylhet vote diche " << amarMap["Sylhet"] << " jon\n";
    cout << "Khulna vote diche " << amarMap["Khulna"] << " jon\n";
    cout << "Barisal vote diche " << amarMap["Barisal"] << " jon\n";
    cout << "Rajshahi vote diche " << amarMap["Rajshahi"] << " jon\n";
    return 0;
}
