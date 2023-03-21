#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100000];
    int input_element,position,element;
    cout<<"size of arrey"<<endl;
    cin>>input_element;
    cout<<"Input element in arrey"<<endl;
    for( int i=0; i<input_element; i++)
    {
        cin>>arr[i];
    }
    //  Inserting an element in arrey.
    cout<<" Input position and element"<<endl;
    cin>>position>>element;
    for(int i=input_element; i>=position; i--)
    {
        arr[i]= arr[i-1];
    }
    arr[position-1]=element;
    input_element++;
    for (int c = 0; c <input_element; c++)
    {
        printf("%d\n", arr[c]);
    }
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);
    for (int c = position-1; c <input_element-1; c++)
    {
        arr[c] = arr[c+1];
    }
    printf("Resultant array:\n");

    for (int c = 0; c < input_element-1; c++)
        printf("%d\n", arr[c]);


    return 0;
}
