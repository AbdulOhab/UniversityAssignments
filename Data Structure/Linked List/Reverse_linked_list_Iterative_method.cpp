#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head=NULL;
#include<stdio.h>
#include<stdlib.h>

struct node{
 int data;
 struct node* next;
};

void deleteAtIndex(struct node* head,int n){
 struct node* temp1=head;
 if(n==1){
  head=temp1->next;
  free(temp1);
  return;
 }
 int i;
 for(i=0;i<n-1 && temp1!=NULL;i++){
  temp1=temp1->next;
  struct node* temp2=temp1;
  temp1->next=temp2->next;
  free(temp2);
  return;
 }
}
void printlist(struct node* n){
 while(n!=NULL){
  printf(" %d ",n->data);
  n=n->next;
 }

}

int main(){
  //created memory for 3 nodes
 struct node* head=(struct node*)malloc(sizeof(struct node));
 struct node* second=(struct node*)malloc(sizeof(struct node));
 struct node* third=(struct node*)malloc(sizeof(struct node));
 struct node* fourth=(struct node*)malloc(sizeof(struct node));

 //provided data elements for 3 nodes
 head->data=23;
 second->data=45;
 third->data=89;
 fourth->data=4;

 //linking the elements
 head->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=NULL;

 deleteAtIndex(head,3);
 printlist(head);

}
