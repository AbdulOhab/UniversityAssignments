#include<stdio.h>


int a[27];
int length=0;

void insert(int v)
{

    a[length]=v;
    length=length+1;
}

void print()
{
    printf("showing the items of the arraylist..\n");
    int i;
    for(i=0;i<length;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int search(int item)
{
    int i;
    for(i=0;i<length;i++)
    {
        if(a[i]==item)
            return i;
    }
    return -1;
}
int deleteAt(int index)
{
    if(index<0 || index>=length) return -1;
    a[index]=a[length-1];
    length--;
    return 9999;

}
int deleteItem(int item)
{
    int index=search(item);
    int temp=deleteAt(index);
    return temp;

}
int main()
{
    int index;
    int n,a,i;
    printf("insert number of input \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        insert(a);
    }

    print();

    printf("give the item to search\n");
    int item;
    scanf("%d",&item);
    index=search(item);

    if(index==-1)
        printf("not found\n");
    else
        printf("found in index %d\n",index);

   int deleteindex;
   printf("give the index to delete\n");
   scanf("%d",&deleteindex);
   int temp=deleteAt(deleteindex);

   if(temp==-1)
    printf(" invalid index\n");
   else
    printf("successfully deleted\n");

    int temp;
    int del;
    printf("give the item to delete\n");
    scanf("%d",&del);
    temp=deleteItem(del);
    print();

    return 0;
}
