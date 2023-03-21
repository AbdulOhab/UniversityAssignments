#include <stdio.h>

int arr[10];
int data_recive[10];
int generate_Code()
{
    printf("Enter 4 bits\n");
    scanf("%d",&arr[3]);
    scanf("%d",&arr[5]);
    scanf("%d",&arr[6]);
    scanf("%d",&arr[7]);
    printf("Generated codeword:");

    arr[1]=arr[3]^arr[5]^arr[7];
    arr[2]=arr[3]^arr[6]^arr[7];
    arr[4]=arr[5]^arr[6]^arr[7];
//    scanf("%d",&arr[0]);
//    scanf("%d",&arr[1]);
//    scanf("%d",&arr[2]);
//    scanf("%d",&arr[4]);
//    printf("Generated codeword:");
//
//    arr[6]=arr[0]^arr[2]^arr[4];
//    arr[5]=arr[0]^arr[1]^arr[4];
//    arr[3]=arr[0]^arr[1]^arr[2];

    for(int i=1;i<8;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int ErrorFix()
{
    printf("Enter your Receive code\n");
    for(int j=1;j<8;j++)
    {
        scanf("%d",&data_recive[j]);
    }

    int p1=data_recive[1]^data_recive[3]^data_recive[5]^data_recive[7];
	int p2=data_recive[2]^data_recive[3]^data_recive[6]^data_recive[7];
	int p4=data_recive[4]^data_recive[5]^data_recive[6]^data_recive[7];

    int p = p4 * 4 + p2 * 2 + p1*1;
     if(p==0)
     {
         printf("\nNo error\n");
     }
     else
     {
         printf("\nError on position %d",p);
         printf("\nCorrect message is\n");
         if(data_recive[p]==0)
         {
             data_recive[p]=1;
         }
         else
         {
             data_recive[p]=0;
         }

         for (int i=1;i<8;i++)
        {
			printf("%d  ",data_recive[i]);
		}

     }
     printf("\n");

}
int main()
{
    int n;
    printf("Hamming Code 4 Bits System\n");
    StarT:
    printf("Enter Your operation\n");
    printf("1.To Send code/generate Code\n");
    printf("2 To Receive code/Error Correction\n");
    printf("3 To Exit\n");

    scanf("%d", &n);
    switch(n)
    {
    case 1:
        generate_Code();
        break;
    case 2:
        ErrorFix();
        break;
    case 3:
        printf("End Program");
        return 0;

    }
    goto StarT;
    return 0;
      //ErrorFix();
}
