
  #include <stdio.h>

  int asciiToBinary(int input) {
        int result = 0, i = 1, remainder;

        /// convert decimal to binary format
        while (input > 0) {
                remainder = input % 2;
                result = result + (i * remainder);
                input = input / 2;
                i = i * 10;
        }
        return(result);
  }

  int main() {
      int i,r, binaryArr[100];
        char inputArr[100];
        int tempArr[6], dataRec[100],sizeofArr = 0;
        int finalArraySizeCounter=0;
        int finalArray[100];
        int termCounter = 1;



       FILE*fp;
        fp = fopen("E:\cc.txt","r");
      fgets( inputArr, 100, fp );
      fclose (fp);

        for(i=0;inputArr[i] != '\0';i++){
            int ch = inputArr[i];
                binaryArr[i]=asciiToBinary(toascii(ch));

        }

        for(i=0;inputArr[i] != '\0';i++){
            //printf("%d ",binaryArr[i]);
            //printf("%c",inputArr[i]);
            sizeofArr++;
        }

        for(int x = 0; x<sizeofArr;x++){
           for(i=6; i>=0; i--){
            r = binaryArr[x]%10;
        binaryArr[x] = binaryArr[x]/10;
          tempArr[i] = r;
        }

        for(i=0;i<=6;i++){
       // printf("%d ",tempArr[i]);
        finalArray[finalArraySizeCounter]=tempArr[i];
        finalArraySizeCounter++;
        }


    }




    ///redundant adder
    ////here's our data stream has 7-bits
    ////redundant bits will-be 4
    ////so output stream will get 11-bits data
    ////sequences R1 R2 3 R4 5 6 7 R8 9 10 11

    int dataArr[100],j=0;

    ///faltu variables
    int a = 0, b = 1,c = 3, d = 7,jj;
    int xx2 = 2, xx4 = 4,xx5 = 5, xx6 = 6,xx8 = 8, xx9 = 9,xx10 = 10;
    ///--------------------------------------->>>>>>>>>>>>>>>>>>>>>>>>>

    printf("size of input is = %d \n",sizeofArr);
    for(jj =0; jj < sizeofArr;jj++){

        for(i=a; i<=(a+10);i++){
        if(i==a || i==b || i==c || i==d){
            dataArr[i]=0;

        }
          else{
            dataArr[i]=finalArray[j];
            j++;
            }
        }





        dataArr[a] = dataArr[xx2]^dataArr[xx4]^dataArr[xx6]^dataArr[xx8]^dataArr[xx10];
        dataArr[b] = dataArr[xx2]^dataArr[xx5]^dataArr[xx6]^dataArr[xx9]^dataArr[xx10];
        dataArr[c] = dataArr[xx4]^dataArr[xx5]^dataArr[xx6];
        dataArr[d] = dataArr[xx8]^dataArr[xx9]^dataArr[xx10];


        ///faltu incriments
        a+=11;
        b+=11;
        c+=11;
        d+=11;

        xx2+=11;
        xx4+=11;
        xx5+=11;
        xx6+=11;
        xx8+=11;
        xx9+=11;
        xx10+=11;
        ///---------------->>>>>>>>>>>>
    }
        printf("Data word : \n");
        for(i=0;i<finalArraySizeCounter;i++){
            if(i%7==0 && i!=0){
                printf(" ");
            }
            printf("%d ",finalArray[i]);
        }
        printf("\n\nCode word : \n");
         for(i=0;i<=((10*sizeofArr)+(sizeofArr-1));i++){
            if(i%11==0 && i!=0){
                printf(" ");
            }
            printf("%d ",dataArr[i]);

        }



    ///Error detect
    ////
    int errPlaceDetect = 0;
    int c1=0, c2=0, c3=0, c4=0;

    ////faltus
    int xxx0 = 0,xxx1 = 1,xxx2 = 2,xxx3 = 3,xxx4 = 4,xxx5 = 5,xxx6 = 6;
    int xxx7 = 7,xxx8 = 8,xxx9 = 9,xxx10 = 10,xxx11 = 11;
    //////////////------------->>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

    printf("\n\nEnter received data bits one by one\n");
    for(i=0; i <= ((10*sizeofArr)+(sizeofArr-1)); i++){
      scanf("%d",&dataRec[i]);
    }

    for(jj =0; jj < sizeofArr;jj++){

        c1 = dataRec[xxx0]^dataRec[xxx2]^dataRec[xxx4]^dataRec[xxx6]^dataRec[xxx8]^dataRec[xxx10];
        c2 = dataRec[xxx1]^dataRec[xxx2]^dataRec[xxx5]^dataRec[xxx6]^dataRec[xxx9]^dataRec[xxx10];
        c3 = dataRec[xxx3]^dataRec[xxx4]^dataRec[xxx5]^dataRec[xxx6];
        c4 = dataRec[xxx7]^dataRec[xxx8]^dataRec[xxx9]^dataRec[xxx10];

          /*  printf("\n%d",c1);
            printf("\n%d",c2);
            printf("\n%d",c3);
            printf("\n%d",c4);
            */

        if(c1==1 || c2==1 || c3==1 || c4==1){
            printf("\nwe have Error, have to find it out ");

            ///eRRoR finding & fixing
            if(c1==1){
            errPlaceDetect += 1;
            }
            if(c2==1){
            errPlaceDetect += 2;
            }
            if(c3==1){
            errPlaceDetect = errPlaceDetect + 4;
            }
            if(c4==1){
            errPlaceDetect += 8;
            }
            printf("\nfound!!! at position %d",errPlaceDetect);

            if (dataRec[errPlaceDetect-1]==1){
                dataRec[errPlaceDetect-1]=0;
            }
            else{
                dataRec[errPlaceDetect-1]=1;
            }

            printf("\nafter fixing receive bits are --> \n");
            for(i=0; i <= ((10*sizeofArr)+(sizeofArr-1)); i++){
                if(i%11==0 && i!=0){
                printf(" ");
            }
                printf("%d ",dataRec[i]);
            }
        }
        else{
            //printf("\nNo err ");
            errPlaceDetect+=11;
        }

    xxx0+=11;
    xxx1+=11;
    xxx2+=11;
    xxx3+=11;
    xxx4+=11;
    xxx5+=11;
    xxx6+=11;
    xxx7+=11;
    xxx8+=11;
    xxx9+=11;
    xxx10+=11;
    }



    ///1 0 1 1 1 0 0 1 0 0 1

    ///0 0 1 1 1 0 0 1 0 0 1
    ///1 1 1 1 1 0 0 1 0 0 1
    ///1 0 0 1 1 0 0 1 0 0 1
    ///1 0 1 0 1 0 0 1 0 0 1
    ///1 0 1 1 0 0 0 1 0 0 1
    ///1 0 1 1 1 1 0 1 0 0 1
    ///1 0 1 1 1 0 1 1 0 0 1
    ///1 0 1 1 1 0 0 0 0 0 1
    ///1 0 1 1 1 0 0 1 1 0 1
    ///1 0 1 1 1 0 0 1 0 1 1
    ///1 0 1 1 1 0 0 1 0 0 0


        return 0;
  }
