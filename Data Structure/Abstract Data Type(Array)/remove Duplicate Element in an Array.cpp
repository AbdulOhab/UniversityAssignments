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


    for(int i=0;i<input_element;i++)
    {
      for(int j=i+1;j<input_element;j++){

        if(arr[j]==arr[i]){

          for(int k=j;k<input_element;k++)
          {
            arr[k]=arr[k+1];
          }
          input_element--;
        }
        else
        {
          j++;
        }
      }
    }

    for(int i = 0; i < input_element; i++)
    {
        printf("%d ", arr[i]);
    }
}
