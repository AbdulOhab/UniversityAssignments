#include<bits/stdc++.h>
using namespace std;
string input;//output;
int data[12];
int sizeOfInput;

void errorCorrection()
{
    cout << "Enter Code:"<<endl;
    int E[12];
    for(int i=0;i<11;i++)
    {
        cin>>E[i];
    }
    int pbit1,pbit2,pbit4,pbit8;

    pbit1=E[10]^E[8]^E[6]^E[4]^E[2]^E[0];
    pbit2=E[9]^E[8]^E[5]^E[4]^E[1]^E[0];
    pbit4=E[7]^E[6]^E[5]^E[4];
    pbit8=E[3]^E[2]^E[1]^E[0];

    int sum = (pbit1*1) +(pbit2*2)+(pbit4*4)+(pbit8*3);

    if(sum == 0)
    {
        cout << "\n No Error \n "<<endl;
    }
    else{

        cout << "\n There is a  Error in  = "<< sum <<" position " <<endl;

        if(E[sum-1] == 0)
        {
            E[sum-1] =1;
        }
        else{
            E[sum-1] =0;
        }
        cout<<"After Fixing the Error :"<< endl;

        for(int j=0;j<11;j++)
        {
            cout<<E[j] << " ";
        }

    }
}
void sendData(string output)
{

    for(int j=0;j<12;j++)
    {
        data[j]='\0';
    }
    int temp1=0,temp2=0,temp3=0,temp4=0;

    data[0]  =data[0] * 10 + (output[0] - 48);
    data[1]  =data[1] * 10 + (output[1] - 48);
    data[2]  =data[2] * 10 + (output[2] - 48);
    temp4 =output[2]^output[1]^output[0];
    data[3]  =data[3] * 10 + (temp4 - 48);
    data[4]  =data[4] * 10 + (output[3] - 48);
    data[5]  =data[5] * 10 + (output[4] - 48);
    data[6]  =data[6] * 10 + (output[5] - 48);
    temp3 =output[5]^output[4]^output[3];
    data[7]  =data[7] * 10 + (temp3 - 48);
    data[8]  =data[8] * 10 + (output[6] - 48);
    temp2 =output[6]^output[4]^output[3]^output[1]^output[0];
    data[9]  =data[9] * 10 + (temp2 - 48);
    temp1 =output[6]^output[5]^output[3]^output[2]^output[0];
    data[10] =data[10] * 10 + (temp1 - 48);

for(int j=0;j<11;j++)
    {
        cout<<data[j]<<" ";
    }
    cout << "\n";

}


void binaryCode()
{
    cout << " Code :" << endl;
    int temp=sizeOfInput,c=1;

    for(int i=0;i<temp;i++)
    {
        int ascii_value = int(input[i]);
         string output="";
        while(ascii_value > 0)
        {
            if(ascii_value % 2 == 0)
            {
                output.push_back('0');
                ascii_value = ascii_value/2;
            }
            else{
                output.push_back('1');
                ascii_value = ascii_value/2;
            }

        }

        reverse(output.begin(), output.end());
    while(output.length() < 7)
    {
      output = "0" + output;
    }


     sendData(output);
        output="";
    }
}


int main()
{
    int n=10;
    while(n>0)
    {
        cout<< "Press 1 to Send code (generate Hamming Code) "<< endl;
        cout<< "Press 2 to Receive code (Error Correction )"<< endl;
        cout<< "Press 0 to Exit" << endl;
        cin>> n;

        cin.clear();
        cin.sync();
        switch(n)
        {
              case 1:
                cout<<"Enter your Massage:"<<endl;
                getline(cin,input);
                sizeOfInput=input.size();
                binaryCode();
                break;

            case 2:
                errorCorrection();
                cout << "\n";
                break;
        }


    }
    return 0;
}
