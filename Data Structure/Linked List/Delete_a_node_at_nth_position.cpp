#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;
//my codeschool
void insert(int n) //for c
{
    //node* temp=(node*)malloc(sizeof(struct node));
    node* temp=new node();
    temp->data = n;
    temp->next=NULL;
    if(head!=NULL) temp->next=head;
    head=temp;
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

void Delete(int n)
{
    node* temp1=head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0; i<n-2; i++)
    {
        temp1 = temp1->next;
    }
    node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}
int main()
{
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    int n;
    cout<<"Enter the position"<<endl;
    cin>>n;
    Delete(n);
    print();
    return 0;
}
