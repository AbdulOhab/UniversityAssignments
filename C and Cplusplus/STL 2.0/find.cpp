#include<bits/stdc++.h>

int main ()
{
    std::vector<int> vec { 10, 20, 30, 40 };

    std::vector<int>::iterator it;
    std::cout << "Original vector :";
    for (int i=0; i<vec.size(); i++)
        std::cout << " " << vec[i];

    std::cout << "\n";
    int ser = 30;

    it = std::find (vec.begin(), vec.end(), ser);
    if (it != vec.end())
    {
        std::cout << "Element " << ser <<" found at position : " ;
        std::cout << it - vec.begin() << " (counting from zero) \n" ;
    }
    else
        std::cout << "Element not found.\n\n";

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int i, j;

    // Declaring the sequence to be searched into
    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7 };

    // Declaring the subsequence to be searched for
    vector<int> v2 = { 3, 4, 5 };

    // Declaring an iterator for storing the returning pointer
    vector<int>::iterator i1;

    // Using std::search and storing the result in
    // iterator i1
    i1 = std::search(v1.begin(), v1.end(), v2.begin(), v2.end());

    // checking if iterator i1 contains end pointer of v1 or not
    if (i1 != v1.end()) {
        cout << "vector2 is present at index " << (i1 - v1.begin());
    } else {
        cout << "vector2 is not present in vector1";
    }

    return 0;
}
// C++ program to demonstrate the use of std::find_end
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // Defining first container
    vector<int>v = {1, 3, 10, 3, 10, 1, 3, 3, 10, 7, 8,
                    1, 3, 10};

    // Defining second container
    vector<int>v1 = {1, 3, 10};

    vector<int>::iterator ip;

    // Using std::find_end
    ip = std::find_end(v.begin(), v.end(), v1.begin(),
                       v1.end());

    // Displaying the index where the last common occurrence
    // begins
    cout << (ip - v.begin()) << "\n";
    return 0;
}
