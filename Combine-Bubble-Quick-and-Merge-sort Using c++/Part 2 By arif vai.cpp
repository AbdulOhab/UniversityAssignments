#include <bits/stdc++.h>
using namespace std;
int number_of_input;
long long  b[100005],m[100005],q[100005];
clock_t totalforbubble, totalformerge,totalforquick;

int bubble_sort_start()
{
    clock_t t1, t2;
	t1 = clock();
 	freopen("output_for_bubble_sort.txt","w",stdout);

 	for(long long  j=1;j<=number_of_input-1;j++)
    {
        for(long long  k=1;k<=number_of_input-j;k++)
        {
            if(b[k]>b[k+1]) swap(b[k],b[k+1]);
        }
    }
    for(long long  l=1;l<=number_of_input;l++)
    {
        cout <<  l << " " << b[l] << endl;
    }



 	t2 = clock();
		totalforbubble = t2 - t1;
		cout << fixed << setprecision(3) << endl;
		cout << "Total Time =  " << (double) totalforbubble <<" ms" << endl;

}


void MergerFucntion(long long first_element, long long mid_point, long long last_element , long long m[]){

		long long i=first_element, j = mid_point+1 , temp[100005] , k=1;

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



		for(k=1,i=first_element; i<=last_element;k++,i++)
		{
			m[i] = temp[k];
		}

	}


void merge_Sort(long long first_element , long long last_element, long long m[])
	{
		if(first_element == last_element)return ;

		long long mid_point = (first_element+last_element)/2;
		merge_Sort(first_element,mid_point,m);
		merge_Sort(mid_point+1,last_element,m);



		MergerFucntion(first_element,mid_point,last_element,m);
	}

int merge_sort_start()
{
    clock_t t3, t4;
	t3 = clock();
 	freopen("output_for_merge_sort.txt","w",stdout);


 	 merge_Sort(1,number_of_input,m);

 	for(long long  l=1;l<=number_of_input;l++)
    {
        cout <<  l << " " << m[l] << endl;
    }
 	t4 = clock();
		totalformerge = t4 - t3;
		cout << fixed << setprecision(3) << endl;
		cout << "Total Time =  " << (double) totalformerge <<" ms" << endl;

}

int Partition(long long q[],long long first , long long last)
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


int quick_sort(long long q[],long long first , long long last )
{
    if(first < last  )
    {
        long long temp = Partition(q,first,last);
        quick_sort(q,first,temp-1);
        quick_sort(q,temp+1,last);
    }
}

int quick_sort_start()
{
    clock_t t5, t6;
	t5 = clock();
 	freopen("output_for_quick_sort.txt","w",stdout);


 	quick_sort(q,1,number_of_input);

      for(long long  l=1;l<=number_of_input;l++)
    {
        cout <<  l << " " << q[l] << endl;
    }



 	t6 = clock();
		totalforquick = t6 - t5;
		cout << fixed << setprecision(3) << endl;
		cout << "Total Time =  " << (double) totalforquick <<" ms" << endl;

}
void final_decision()
{
    freopen("final_decision_output.txt","w",stdout);
    cout << "Total Time for bubble sort =  " << (double) totalforbubble <<" ms" << endl;
    cout << "Total Time for merge sort =  " << (double) totalformerge <<" ms" << endl;
    cout << "Total Time for quick sort=  " << (double) totalforquick <<" ms" << endl;

    if(totalforbubble < totalformerge && totalforbubble < totalforquick )
    {
        cout << "Best : bubble sort, time  =  " << (double) totalforbubble <<" ms" << endl;
        if(totalformerge < totalforquick)
        {
            cout << "average :   merge sort, time  =  " << (double) totalformerge <<" ms" << endl;
            cout << "worst   :   quick sort, time  =  " << (double) totalforquick <<" ms" << endl;
        }
        else
        {
            cout << "average :   quick sort, time  =  " << (double) totalforquick <<" ms" << endl;
            cout << "worst   :   merge sort, time  =  " << (double) totalformerge <<" ms" << endl;
        }
    }
    else if(totalformerge < totalforbubble && totalformerge < totalforquick )
    {
        cout << "Best :   merge sort, time  =  " << (double) totalformerge <<" ms" << endl;
        if(totalforbubble < totalforquick)
        {
            cout << "average :   bubble sort, time  =  " << (double) totalforbubble <<" ms" << endl;
            cout << "worst   :   quick sort, time  =  " << (double) totalforquick <<" ms" << endl;
        }
        else
        {
            cout << "average :   quick sort, time  =  " << (double) totalforquick <<" ms" << endl;
            cout << "worst   :   bubble sort, time  =  " << (double) totalforbubble <<" ms" << endl;
        }
    }
    else
    {
         cout << "Best :  quick sort, time  =  " << (double) totalforquick <<" ms" << endl;
        if(totalforbubble < totalformerge)
        {
            cout << "average :   bubble sort, time  =  " << (double) totalforbubble <<" ms" << endl;
            cout << "worst   :  merge sort, time  =  " << (double) totalformerge <<" ms" << endl;
        }
        else
        {
            cout << "average :    merge sort, time  =  " << (double) totalformerge <<" ms" << endl;
            cout << "worst   :   bubble sort, time  =  " << (double) totalforbubble <<" ms" << endl;
        }



    }
}


int  main()
{


    freopen("Numbers.txt","r",stdin);



   cin >> number_of_input;


    for(long long  i=0;i<=number_of_input;i++)
    {
        long long  a;
        cin  >> a;

         b[i] = a;
         m[i] = a;
         q[i] = a;

    }


    bubble_sort_start();
    merge_sort_start();
    quick_sort_start();
    final_decision();

    return 0;
}


