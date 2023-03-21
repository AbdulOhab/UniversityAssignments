//with static
#include <iostream>
using namespace std;
void counter()
{
    static int count=0;
    cout << count++<<" ";
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }
}
//without static
// void counter()
// {
//     int count=0;
//     cout << count++;
// }

// int main(0
// {
//     for(int i=0;i<5;i++)
//     {
//         counter();
//     }
// }