#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of times 3 appears : "
         << count(arr, arr + n, 3);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";

    cout << "Number of times 'e' appears : "
         << count(str.begin(), str.end(), 'e');

    return 0;
}
