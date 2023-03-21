#include<iostream>
using namespace std;

int Print(int n)//ok
{
  if(n==0) return 0;
  else cout<<n<<endl; return Print(n-1);
}

int Factorial(int n)//ok
{
  if(n<=1)
  {
    return 1;
  }
  else
  {
    return n*Factorial(n-1);
  }
}
int fibonacci(int n)//ok
{
  if(n<=1)
  {
    return n;
  }
  else
  {
    return  fibonacci(n-2)+fibonacci(n-1);
  }
}
int main(int ab_ohab, char const * ba_th[]) {
  int a, x , i =  0 ;
  //5cin>>a;
  //Print(a);
  //cout<<Factorial()<<endl;

  // for fibonacci
  /*cin>> a ;
  while(i < a)
  {
      cout << " " << fibonacci(i);
      i++;
   }*/
  return 0;
}
