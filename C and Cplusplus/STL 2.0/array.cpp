#include<iostream>
#include<array>

using namespace std;
//c+11
void display_1D_array(array<int, 5> &int_array)
{
	cout<<"1D array is :"<<endl;
	for(int i = 0; i < 5; i++)
	{
		cout<<int_array[i]<<" ";
	}
	cout<<"\n";
}

void display_2D_array(array< array<int, 3>, 3> &int_array)
{
	cout<<"2D array is :"<<endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout<<int_array[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

int main()
{
	array<int, 5> int_array = {1, 3, 2, 4, 5};
	display_1D_array(int_array);

	array<array<int, 3>, 3> int_2D_array = {
		{
			{1, 2, 3},
			{4, 5, 6},
			{7, 8, 9}
		}
	};
	display_2D_array(int_2D_array);
  //fill() function method assigns the given value to every element of the array
	return 0;
}
