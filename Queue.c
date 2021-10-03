#include<stdio.h>
#define null_value -9999
#define success_value 9999

int q[6];
int front, rear, length;

void initialize()
{
    front=0;
    rear=0;
    length=0;
}


int enqueue(int item)
{
    if(length==6)return null_value;
    q[front]=item;
    front++;
    length++;
    return success_value;
}
int dequeue()
{
    int value;
    if(length==0)return null_value;
    value=q[rear];
    rear++;
    length--;

    return value;
}
void print()
{
    int i;
    for(i=rear;i<front;i++)
    {
        printf("%d ",q[i]);
    }
    printf("\n");
}

int main()
{
    initialize();
    int ret;
    int n;
    printf("please give the number of inputs: ");
    scanf("%d",&n);
    int i,userinput;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&userinput);
        ret=enqueue(userinput);
    }
    print();

    int item;
    item=dequeue();
    printf("the item is %d \n",item);
    item=dequeue();
    printf("the item is %d \n",item);
    print();

}
