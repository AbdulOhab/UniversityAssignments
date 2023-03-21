//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//    vector<int> amarVector;
//    vector<int>::iterator amarVectorErIterator;
//
//    amarVector.push_back(1);
//    amarVector.push_back(2);
//    amarVector.push_back(3);
//
//    for(amarVectorErIterator = amarVector.begin(); amarVectorErIterator != amarVector.end(); amarVectorErIterator++)
//    {
//        cout << *amarVectorErIterator<<" "; // dereference
//    }
//    return 0;
//}
/*সব কন্টেইনার begin নামের একটা ইটারেটর সাপোর্ট করে, যার সাথে আমরা ইতোমধ্যে পরিচিত। আমরা v নামের কোনো
ভেক্টরের ক্ষেত্রে v.begin() লিখলে সেটা সেই ভেক্টরের শুরুটা পয়েন্ট করতো। একইভাবে সব কন্টেইনার end নামের আরেকটি
ইটারেটর সাপোর্ট করে, যা পয়েন্ট করে কন্টেইনারের শেষ। এর সাথেও আমরা ইতোমধ্যেই পরিচিত! বাহ, শুরু করার আগেই দুইটি
জিনিস জানা শেষ আমাদের।*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> amarVector;
    vector<int>::iterator amarVectorErIterator;

    for (int i=1; i<=100; i++) amarVector.push_back(i);
    int sum = 0;
    for(amarVectorErIterator = amarVector.begin() + 20; amarVectorErIterator != amarVector.begin()+40; amarVectorErIterator++)
    {
        sum += *amarVectorErIterator;
        cout << *amarVectorErIterator << " ";
    }
    cout << endl << sum << endl;
    return 0;
}
