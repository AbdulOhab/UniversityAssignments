#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head=NULL;
//my codeschool
void insert(int data,int n)
{
  node* temp=new node();
  temp->data = data;
  temp->next=NULL;
  if (n==1){
    temp->next=head;
    head=temp;
    return;
  }
  node* temp1=head;
  for(int i=0;i<n-2;i++)
  {
    temp1=temp1->next;
  }
  temp->next = temp1->next;
  temp1->next= temp;
}
void print()
{
  node* head=head;
  while(head!=NULL)
  {
    cout<<head->data<<' ';
    head=head->next;
  }
  cout<<endl;
}
int main()
{
  insert(2,1);
  insert(3,2);
  insert(4,1);
  insert(5,2);
  print();
  return 0;
}
