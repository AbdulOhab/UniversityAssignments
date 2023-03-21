#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100000];
    int search_key;
    int input_element;
    int temp;
    int flag=0;
    cout<<"element of arrey"<<endl;
    cin>>input_element;
    cout<<"Input element in arrey"<<endl;
    for( int i=1; i<=input_element; i++)
    {
        cin>>arr[i];
    }
    //Search Operation// like linear Search
    cout<<"seartch element input"<<endl;
    cin>>search_key;

    for(int j=1; j<=input_element; j++)
    {
        if(arr[j]==search_key)
        {
            flag=1;
            break;
        }
    }
    (flag ? cout<<"\nElement is found at position"<<endl :cout<<"\nElement not found"<<endl);

    // simple sort
    for (int i = 1; i < input_element; ++i)
    {
        for (int j = i + 1; j <input_element; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp =  arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Tarrey sort\n");
    for (int i = 1; i<=input_element; ++i)
    {
        printf("%d\n", arr[i]);
    }
    // using sortcut
    sort(arr, arr + input_element);
    cout<<"using sortcut"<<endl;;
    for (int i=0; i<input_element; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
