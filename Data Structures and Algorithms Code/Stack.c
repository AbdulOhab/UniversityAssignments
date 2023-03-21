#include<stdio.h>
#define null_value -9999
#define success_value 9999
#define stack_max_size 5

int stack[stack_max_size];
int top;

void initialize()
{
    top=0;
}


int push(int item)
{
    if(top>=stack_max_size)return null_value;
    stack[top]=item;
    top++;
    return success_value;
}
int pop()
{
    int ret;
    if(top==0)return null_value;
    ret=stack[top-1];
    top=top-1;
    return ret;
}

void print()
{
    printf("\n");
    int i;
    for(i=0;i<top;i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
int main()
{
    initialize();
    push(10);
    push(20);
    push(30);

    print();

    int poppedvalue;
    poppedvalue=pop();

    printf("the popped item is %d",poppedvalue);

    print();
    poppedvalue=pop();

    printf("the popped item is %d",poppedvalue);

    print();

    push(70);

    print();


    return 0;

}
