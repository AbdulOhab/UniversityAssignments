#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head=NULL;
// in c++
void insert(node** pointerHead,int n)
{
  node* temp=new node();
  temp->data = n;
  temp->next=NULL;
  if(*pointerHead!=NULL) temp->next=head;
  *pointerHead=temp;
}
void print(node* head)
{
  while(head!=NULL)
  {
    cout<<head->data<<' ';
    head=head->next;
  }
  cout<<endl;
}

int listLength(node* head)
{
  node* current=head;
  int count=0;
  while(current!=NULL)
  {
    count++;
    current=current->next;
  }
  return count;
}
main()
{
  head=NULL;
  int a;
  cin>>a;
  while(a--)
  {
    int x;
    cin>>x;
    insert(&head,x);
    //listLength(&x);
    print(head);
  }
  cout<<"Length is the List: "<<listLength(head);
  return 0;
}
