#include<bits/bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers:");
    scanf("%d %d %d"&num1,&num2,&num3);
    if(num1 < num2 && num1 < num3)
    {
        printf("%d is smallest",num1);
    }
    else if(num2 < num3)
    {
        printf("%d is smallest",num2);
    }
    else
    {
        printf("%d is smallest",num3);
    }
    return 0;
}

//int main()
//{
//    float n1, n2, n3;
//
//    cout << "Enter three numbers: ";
//    cin >> n1 >> n2 >> n3;
//
//    if(n1 >= n2 && n1 >= n3)
//        cout << "Largest number: " << n1;
//
//    if(n2 >= n1 && n2 >= n3)
//        cout << "Largest number: " << n2;
//
//    if(n3 >= n1 && n3 >= n2)
//        cout << "Largest number: " << n3;
//
//    return 0;
//}
