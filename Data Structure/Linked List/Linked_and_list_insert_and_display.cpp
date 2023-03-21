#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* head=NULL;

void insert(int n) //for c
{
  node* temp=(node*)malloc(sizeof(struct node));
  //node* temp=new node();
  temp->data = n;
  temp->next=NULL;
  if(head!=NULL) temp->next=head;
  head=temp;
}
void print() // for cpp
{
  node* temp=head;
  while(temp!=NULL)
  {
    cout<<temp->data<<endl;
    temp=temp->next;
    break;
  }
}
void printList()
{
    node* n;
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
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
    insert(x);
    //print();
  }
  printList();
  return 0;
}
