#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000];
    int input_element;

    cout<<"element of arrey"<<endl;
    cin>>input_element;
    cout<<"Input element in arrey"<<endl;
    for( int i=0; i<input_element; i++)
    {
        cin>>arr[i];
    }
 for(int i=1;i<input_element;++i){
        if (arr[0] < arr[i]){
            arr[0]=arr[i];
        }
    }
  cout<<"Largest element = " << arr[0]<<endl;
  for(int i=1;i<input_element;++i){
         if (arr[0] >arr[i]){
             arr[0]=arr[i];
         }
     }
   cout<<"smallest element = " << arr[0]<<endl;

    return 0;
}
