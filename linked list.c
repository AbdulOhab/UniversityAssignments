#include<stdio.h>
#include<stdlib.h>

struct listnode
{
    int item;
    struct listnode * next;
};

struct listnode *list;

void initialize()
{
    list=0;
}

void insert(int val)
{
    struct listnode *newnode;
    newnode= (struct listnode*)malloc(sizeof(sizeof(struct listnode)));
    newnode-> item=val;
    newnode->next=list;
    list=newnode;

}

void print()
{
    struct listnode *temp;
    temp=list;
     while(temp!=0)
     {
         printf("%d->",temp->item);
         temp=temp->next;
     }
     printf("\n");
}
int main()
{

    int aa,n,i;
    printf("please give the number of items\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&aa);
        insert(aa);
    }

    print();
    return 0;

}
