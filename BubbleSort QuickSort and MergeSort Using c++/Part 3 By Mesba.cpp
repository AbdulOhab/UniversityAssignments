#include <bits/stdc++.h>
using namespace std;
int sizez=100000;
int i1ba[100001],i1bd[100001],i1ma[100001],i1md[100001],i1qa[100001],i1qd[100001];
int i2ba[100001],i2bd[100001],i2ma[100001],i2md[100001],i2qa[100001],i2qd[100001];
int i3ba[100001],i3bd[100001],i3ma[100001],i3md[100001],i3qa[100001],i3qd[100001];

clock_t bascending1,bdescending1,mascending1,mdescending1,qascending1,qdescending1;
clock_t bascending2,bdescending2,mascending2,mdescending2,qascending2,qdescending2;
clock_t bascending3,bdescending3,mascending3,mdescending3,qascending3,qdescending3;

void bubble_ascending(int z)
{
    clock_t t1, t2;

    if( z == 1)
    {
        t1 = clock();

        freopen("output_for_bubble_sort_Ascending_1.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i1ba[k]>i1ba[k+1]) swap(i1ba[k],i1ba[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i1ba[l] << endl;
        }

    t2 = clock();
    bascending1 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bascending1 << endl;

    }
    else if( z == 2)
    {
    clock_t t11, t22;
        t11 = clock();

        freopen("output_for_bubble_sort_Ascending_2.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i2ba[k]>i2ba[k+1]) swap(i2ba[k],i2ba[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2ba[l] << endl;
        }

    t22 = clock();
    bascending2 =(t22-t11)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bascending2 << endl;


    }
    else
    {clock_t t13, t23;
          t13 = clock();

        freopen("output_for_bubble_sort_Ascending_3.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i3ba[k]>i3ba[k+1]) swap(i3ba[k],i3ba[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3ba[l] << endl;
        }

        t23 = clock();

    bascending3 =(t23-t13)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bascending3 << endl;
    }

}
void bubble_descending(int z)
{
    clock_t t1, t2;

    if( z == 1)
    {
        t1 = clock();

        freopen("output_for_bubble_sort_Descending_1.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i1bd[k]<i1bd[k+1]) swap(i1bd[k],i1bd[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i1bd[l] << endl;
        }

    t2 = clock();
    bdescending1 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bdescending1 << endl;
    }
    else if( z == 2)
    {
    clock_t t11, t22;
        t11 = clock();

        freopen("output_for_bubble_sort_Descending_2.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i2bd[k]<i2bd[k+1]) swap(i2bd[k],i2bd[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2bd[l] << endl;
        }

    t22 = clock();
    bdescending2 =(t22-t11)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bdescending2 << endl;

    }
    else
    {
    clock_t t13, t23;
         t13 = clock();

        freopen("output_for_bubble_sort_Descending_3.txt","w",stdout);
        for(int j=1;j<=sizez-1;j++)
        {
            for(int  k=1;k<=sizez-j;k++)
            {
                if(i3bd[k]<i3bd[k+1]) swap(i3bd[k],i3bd[k+1]);
            }
        }

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3bd[l] << endl;
        }

    t23 = clock();
    bdescending3 =(t23-t13)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) bdescending3 << endl;
    }


}

int Partition_d(int q[],int first , int last)
{
    int  pivot = q[first];
    int i = last-1;

    for(int j = first; j < last ; j++)
    {
        if(q[j]>= pivot)
        {
            i = i +1;
            swap(q[i],q[j]);

        }
    }
    swap(q[i+1],q[last]);
    return i+1;


}

int Partition_a(int q[],int first , int last)
{
    int  pivot = q[last];
    int i = first-1;
    for(int j = first; j < last ; j++)
    {
        if(q[j]<= pivot)
        {
            i = i +1;
            swap(q[i],q[j]);

        }
    }
    swap(q[i+1],q[last]);
    return i+1;

}



void quick_sort(int q[],int first , int last ,char u)
{
    if( u == 'a')
    {
        if(first < last  )
        {
            int temp = Partition_a(q,first,last);
            quick_sort(q,first,temp-1,'a');
            quick_sort(q,temp+1,last,'a');
        }
    }
    else
    {

            int temp = Partition_d(q,first,last);
            quick_sort(q,first,temp-1,'d');
            quick_sort(q,temp+1,last,'d');


    }

}




void quick_ascending(int y)
{
 clock_t t1, t2;
    if(y == 1)
    {
    t1 = clock();

        freopen("output_for_quick_sort_Ascending_1.txt","w",stdout);

        quick_sort(i1qa,1,sizez,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i1qa[l] << endl;
        }


    t2 = clock();
    qascending1 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qascending1 << endl;

    }
    else if(y == 2)
    {
    clock_t t11, t22;
    t11 = clock();

        freopen("output_for_quick_sort_Ascending_2.txt","w",stdout);

        quick_sort(i2qa,1,sizez,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2qa[l] << endl;
        }

    t22 = clock();
    qascending2 =(t22-t11)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qascending2 << endl;

    }
    else
    {
    clock_t t13, t23;
    t13 = clock();

        freopen("output_for_quick_sort_Ascending_3.txt","w",stdout);

        quick_sort(i3qa,1,sizez,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3qa[l] << endl;
        }

    t23 = clock();
    qascending3 =(t23-t13)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qascending3 << endl;

    }

}
void quick_descending(int y)
{
clock_t t1, t2;
    if(y == 1)
    {
    t1 = clock();

        freopen("output_for_quick_sort_descending_1.txt","w",stdout);


        quick_sort(i1qd,1,sizez,'d');


        for(int  l=1;l<=sizez;l++)
        {
            cout << i1qd[l] << endl;
        }


    t2 = clock();
    qdescending1 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qdescending1 << endl;

    }
    else if(y == 2)
    {
    t1 = clock();

        freopen("output_for_quick_sort_descending_2.txt","w",stdout);

        quick_sort(i2qd,1,sizez,'d');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2qd[l] << endl;
        }

    t2 = clock();
    qdescending2 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qdescending2 << endl;

    }
    else
    {
    t1 = clock();

        freopen("output_for_quick_sort_descending_3.txt","w",stdout);

        quick_sort(i3qd,1,sizez,'d');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3qd[l] << endl;
        }

    t2 = clock();
    qdescending3 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) qdescending3 << endl;

    }

}

void MergerFucntion(int first_element, int mid_point, int last_element , int m[] ,char g){

		int  i=first_element, j = mid_point+1 , temp[100005] , k=1;
		if( g == 'a')
		{
            while(i<=mid_point && j<=last_element)
            {
                if(m[i] < m[j])
                {
                    temp[k++] = m[i++];
                }
                else
                {
                    temp[k++] = m[j++];
                }
            }

            while(i<=mid_point)
            {
                temp[k++] = m[i++];
            }

            while(j<=last_element)
            {
                temp[k++] = m[j++];
            }



		}
		else
		{
		 while(i<=mid_point && j<=last_element)
            {
                if(m[i] > m[j])
                {
                    temp[k++] = m[i++];
                }
                else
                {
                    temp[k++] = m[j++];
                }
            }

            while(i<=mid_point)
            {
                temp[k++] = m[i++];
            }

            while(j<=last_element)
            {
                temp[k++] = m[j++];
            }



		}


		for(k=1,i=first_element; i<=last_element;k++,i++)
		{
			m[i] = temp[k];
		}

	}



void merge_Sort(int first_element , int last_element, int m[], char g)
	{
		if(first_element == last_element)return ;

        	int mid_point = (first_element+last_element)/2;
            merge_Sort(first_element,mid_point,m,g);
            merge_Sort(mid_point+1,last_element,m,g);

		MergerFucntion(first_element,mid_point,last_element,m,g);
	}




void merge_ascending(int x)
{
clock_t t1, t2;
    if( x == 1)
    {
     t1 = clock();

        freopen("output_for_merge_sort_Ascending_1.txt","w",stdout);

        merge_Sort(1,sizez,i1ma,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i1ma[l] << endl;
        }


    t2 = clock();
    mascending1 =(t2-t1)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) mascending1 << endl;

    }
    else if( x == 2)
    {
    clock_t t11, t22;
     t11 = clock();

        freopen("output_for_merge_sort_Ascending_2.txt","w",stdout);

        merge_Sort(1,sizez,i2ma,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2ma[l] << endl;
        }


    t22 = clock();
    mascending2 =(t22-t11)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) mascending2 << endl;
    }
    else
    {
    clock_t t13, t23;
      t13 = clock();

        freopen("output_for_merge_sort_Ascending_3.txt","w",stdout);

        merge_Sort(1,sizez,i3ma,'a');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3ma[l] << endl;
        }


    t23 = clock();
    mascending3 =(t23-t13)/CLOCKS_PER_SEC;
    //cout << fixed << setprecision(3) << endl;
    cout << "Total Time = " << (double) mascending3 << endl;

    }

}
void merge_descending(int x)
{
    clock_t t1, t2;
    if( x == 1)
    {
      t1 = clock();

        freopen("output_for_merge_sort_descending_1.txt","w",stdout);

        merge_Sort(1,sizez,i1md,'d');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i1md[l] << endl;
        }


      t2 = clock();
      mdescending1 =(t2-t1)/CLOCKS_PER_SEC;
      //cout << fixed << setprecision(3) << endl;
      cout << "Total Time = " << (double) mdescending1 << endl;


    }
    else if( x == 2)
    {
    clock_t t11, t22;
    t11 = clock();

        freopen("output_for_merge_sort_descending_2.txt","w",stdout);

        merge_Sort(1,sizez,i2md,'d');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i2md[l] << endl;
        }


      t22 = clock();
      mdescending2 =(t22-t11)/CLOCKS_PER_SEC;
      //cout << fixed << setprecision(3) << endl;
      cout << "Total Time = " << (double) mdescending2 << endl;


    }
    else
    {
    clock_t t13, t23;
        t13 = clock();

        freopen("output_for_merge_sort_descending_3.txt","w",stdout);

        merge_Sort(1,sizez,i3md,'d');

        for(int  l=1;l<=sizez;l++)
        {
            cout << i3md[l] << endl;
        }


      t23 = clock();
      mdescending3 =(t23-t13)/CLOCKS_PER_SEC;
      //cout << fixed << setprecision(3) << endl;
      cout << "Total Time = " << (double) mdescending3 << endl;

    }

}

void in1()
{
    freopen("input1.txt","r",stdin);
    cin>>sizez;

    int a;

    for(int  i=1;i<=sizez;i++)
    {
      cin >> a;

      i1ba[i] = a;
      i1bd[i] = a;
      i1ma[i] = a;
      i1md[i] = a;
      i1qa[i] = a;
      i1qd[i] = a;
    }
  bubble_ascending(1);
  bubble_descending(1);

  quick_ascending(1);
    // quick_descending(1);
  merge_ascending(1);
  merge_descending(1);

}

void in2()
{
    freopen("input2.txt","r",stdin);
     cin>>sizez;
     int b;

    for(int  i=1;i<=sizez;i++)
    {
      cin >> b;

      i2ba[i] = b;
      i2bd[i] = b;
      i2ma[i] = b;
      i2md[i] = b;
      i2qa[i] = b;
      i2qd[i] = b;

 }
 bubble_ascending(2);
 bubble_descending(2);

 quick_ascending(2);
   // quick_descending(2);
 merge_ascending(2);
 merge_descending(2);
}

void in3()
{
    freopen("input3.txt","r",stdin);
     cin>>sizez;

     int c;

    for(int  i=1;i<=sizez;i++)
    {
      cin >> c;

      i3ba[i] = c;
      i3bd[i] = c;
      i3ma[i] = c;
      i3md[i] = c;
      i3qa[i] = c;
      i3qd[i] = c;


    }
  bubble_ascending(3);
  bubble_descending(3);

  quick_ascending(3);
     //quick_descending(3);
  merge_ascending(3);
  merge_descending(3);
}

void final_decision()
{
//clock_t bascending1,bdescending1,mascending1,mdescending1,qascending1,qdescending1;
//clock_t bascending2,bdescending2,mascending2,mdescending2,qascending2,qdescending2;
//clock_t bascending3,bdescending3,mascending3,mdescending3,qascending3,qdescending3;


    freopen("final_decision.txt","w",stdout);
    cout << "input1"<< endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Bubble Sort: = Ascending : " << bascending1  << "  , Descending : " << bdescending1 << endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Merge Sort : = Ascending : " << mdescending1 << "  , Descending : " << mdescending1<< endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Quick Sort : = Ascending : " << qascending1  << "  , Descending : " << endl;

    if( bascending1 > mdescending1 && bascending1 > qascending1)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << bascending1;
    }
    else if( mdescending1 > bascending1 && mdescending1 > qascending1)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << mdescending1;
    }
    else
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << qascending1;
    }


    if(bdescending1 > mdescending1 )
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "  , Descending : " << bdescending1<< endl;
    }
    else
    {
         //cout << fixed << setprecision(3) << endl;
         cout << "  , Descending : " << mdescending1<< endl;
    }
   // cout << "Best Sorting: = Ascending : " << << "  , Descending : " << << endl;




    cout << "input2"<< endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Bubble Sort: = Ascending : " << bascending2  << "  , Descending : " << bdescending2 << endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Merge Sort : = Ascending : " << mdescending2 << "  , Descending : " << mdescending2 << endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Quick Sort : = Ascending : " << qascending2  << "  , Descending : " << endl;


    if( bascending2 > mdescending2 && bascending2 > qascending2)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << bascending2;
    }
    else if( mdescending2 > bascending2 && mdescending2 > qascending2)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << mdescending2;
    }
    else
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << qascending2;
    }


    if(bdescending2 > mdescending2 )
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "  , Descending : " << bdescending2<< endl;
    }
    else
    {
         //cout << fixed << setprecision(3) << endl;
         cout << "  , Descending : " << mdescending2<< endl;
    }


   // cout << "Best Sorting: = Ascending : " << << "  , Descending : " << << endl;




    cout << "input3"<< endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Bubble Sort: = Ascending : " << bascending3  << "  , Descending : " << bdescending2 << endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Merge Sort : = Ascending : " << mdescending3 << "  , Descending : " << mdescending3 << endl;
    //cout << fixed << setprecision(3) << endl;
    cout << "Quick Sort : = Ascending : " << qascending3  << "  , Descending : " << endl;


    if( bascending3 > mdescending3 && bascending3 > qascending3)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << bascending3;
    }
    else if( mdescending3 > bascending3 && mdescending3 > qascending3)
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << mdescending3;
    }
    else
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "Best Sorting: = Ascending : " << qascending3;
    }


    if(bdescending3 > mdescending3 )
    {
        //cout << fixed << setprecision(3) << endl;
        cout << "  , Descending : " << bdescending3<< endl;
    }
    else
    {
        //cout << fixed << setprecision(3) << endl;
         cout << "  , Descending : " << mdescending3<< endl;
    }



   // cout << "Best Sorting: = Ascending : " << << "  , Descending : " << << endl;



}

int main()
{
    in1();
    in2();
    in3();
    final_decision();

    return 0;
}
