// 2D Array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A[3][4]= {{1,2,3,4},{2,4,6,8},{1,3,5,7}};
    int *B[3];
    int **C;
    int i,j;
    /*B[0]=(int *)malloc(4*sizeof(int));
    B[1]=(int *)malloc(4*sizeof(int));
    B[2]=(int *)malloc(4*sizeof(int));
    C=(int **)malloc(3*sizeof(int *));
    C[0]=(int *)malloc(4*sizeof(int));
    C[1]=(int *)malloc(4*sizeof(int));
    C[2]=(int *)malloc(4*sizeof(int));*/

    B[0]= new int[4];
    B[1]=new int[4];
    B[2]=new int[4];
    C=new int*[4];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }
    return 0;
}
