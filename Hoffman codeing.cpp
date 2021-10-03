#include<bits/stdc++.h>

using namespace std;

int total_character=0 ,number_of_templates=0 ;

char arr[50];
int ascii[50], temp_station[50];

struct character
{
    int ascii_value ;
    int number_of_same_value  ;
    int position  ;
    //tree_value
};
struct character templates[130];

int check(int a)
{
    int fun = 5;
    for(int i = 1; i<a ;i++)
    {

        cout << "step 1 on :"  << i << endl;
        if(temp_station[a] == temp_station[i] )
        {
            cout << "step 1.1 on  :" << a << endl;
            cout << "value  :" << temp_station[a] << endl;
            templates[i].number_of_same_value++;
            cout << "new value  :" << templates[i].number_of_same_value << endl;
            fun = fun + 1;
            break;
        }
    }

    if(fun == 5 )
    {
        cout << "step 2 on  : " << endl;
        cout << "value  :" << temp_station[a] << endl;
        number_of_templates++;
        templates[number_of_templates].ascii_value = temp_station[a];
        templates[number_of_templates].number_of_same_value++;
        templates[number_of_templates].position = number_of_templates;
        cout << "new value  :" << templates[number_of_templates].number_of_same_value << endl;
        cout <<"final time  :"<< number_of_templates << endl;
    }

}

int arranging()
{
    int temp;
    for(int i=1;i <= total_character; i++ )
    {
        cout << "\n" << endl;
        if(i == 1)
        {
            cout << "first i :" << endl;
            templates[i].ascii_value = temp_station[i];
            templates[i].number_of_same_value++;
            templates[i].position = i;
            number_of_templates++;
            cout << number_of_templates << endl;
        }
        else
        {
            cout << "second  i :" << i << endl;
            check(i);
            cout << number_of_templates << endl;
        }

    }


}

int main()
{
    clock_t t1,t2,total;
    t1= clock();

    freopen("move.txt","r",stdin);
    //freopen("error.txt", "w", stderr);
    freopen("move_output.txt","w",stdout);
    int i;
    for( i=1;i<=50;i++)
    {
        char a;
        cin  >> a;
        if (a == '\0') break;
        arr[i] = a;
        ascii[i]=arr[i];
        temp_station[i] = ascii[i] ;
        cout << i << ":" << a << endl;
        a = '\0';
    }

    ascii[i] = '\0';
    total_character = i - 1;
    cout << total_character  << endl;//
    cout << "now ascii value :" << endl;

    arranging();

    for(int j=1;j<=50;j++)
    {
        //ascii[j]=arr[j];
        int a ;
        a = ascii[j];
        if (a == '\0') break;
        cout << j << ":" << a << endl;
    }

    for(int k=1;k<=total_character; k++ )
    {
        cout << templates[k].ascii_value << " " << templates[k].number_of_same_value <<  " " << templates[k].position << endl;
    }
    t2 = clock();
    total =t2-t1;
    cout << "Total Time = " << (double) total << endl;

    return 0;
}
