/**
 *    @author: Ab_ohab
 *    @ID    :2019000000061
 *    created: 03.10.2021 08:26:29 PM
**/
#include <stdio.h>
#include <math.h>
#include <string.h>
typedef long long ll;

struct hosts{
    int x;
    char y;
};

int Newtwork_address=0;
int Newtwork_address_octed3=0;
int pervious_octed;
int pervious_octed_number;
int address_ip;


void solve()
{

  // this is ip
  printf("IP:192.168.10.0/24\n");
  int a=192,b=168,c=10,d=0,e=24;

  //for manual input;
  // char f,g,h,k,l;
  // scanf("%d %c %d %c %d %c %d %c %d", &a, &f , &b , &g , &c ,&h , &d, &k , &e );
  // cout<<a<<f<<b<<f<<c<<f<<d<<k<<e;

  ll Subnet_arr[15];
  int l;
  for(int i=1;i<15;i++)
  {
    l=pow(2,i-1);
    Subnet_arr[i]= l;
  }

  printf("Number of Hosts: ");
  int n;
  scanf("%d", &n);
  struct hosts host_arr[n];
  int A_c = 65;
  int IP_addresses_needed=0;;
  for(int j=1;j<=n;j++)
  {
    printf("Subnet  %c : ",A_c);
    host_arr[j].y = A_c;
    scanf(" %d",&host_arr[j].x);
    IP_addresses_needed+=host_arr[j].x;
    A_c++;
  }

  // Bubble sort has been used to all host sorted.
  // int x is host and char y is hosts name;
  int temp1;
  for(int a=1;a<=n-1;a++)
  {
    for(int b=1;b<=n-a;b++)
    {
      if(host_arr[b].x<host_arr[b+1].x)
      {
        temp1=host_arr[b].x;
        host_arr[b].x = host_arr[b+1].x;
        host_arr[b+1].x=temp1;

        temp1=host_arr[b].y;
        host_arr[b].y = host_arr[b+1].y;
        host_arr[b+1].y=temp1;
      }
    }
  }

  // Available IP addresses;
  int Available_IP_addresses;
  int Ip_mask = 32-e;
  Available_IP_addresses = pow(2,Ip_mask);
  //cout<<Ip_mask<<" " <<Available_IP_addresses<<endl; // for testing
  if(IP_addresses_needed>Available_IP_addresses)
  {
    printf("Subnetting faild\n");
    printf("IP addresses needed %d and Available IP addresses  %d\n",IP_addresses_needed,Available_IP_addresses);
    return;
  }
  printf("-----------------------------------------------------------------------------------------------------------------\n");
  printf("|                                               Subnetting                                                       \n");
  printf("-----------------------------------------------------------------------------------------------------------------\n");
  printf("| HostName | hosts Size| Network Address | Mask | Fist IP Address | Last IP Address | Broadcast Address |\n");
  printf("------------------------------------------------------------------------------------------------------------------\n");

  // int x is host and char y is host name;
  for(int i=1; i<=n; i++)
  {
    printf("  ");
    printf("Host %c", host_arr[i].y); //HostName
    printf("        ");
    printf("%d", host_arr[i].x); //Number of hosts
    //printf("       ");
    int octed=0;
    for(int ub=1;ub<=14;ub++) //increment
    {
      if(host_arr[i].x > Subnet_arr[ub])
      {
        octed = Subnet_arr[ub+1];
      }
    }
    //for octed This Project we did vlsm for only last 2 octed
    int octeted_file;
    if(octed<=128)
    {
      octeted_file=4;
    }
    else
    {
      octeted_file = 3;
    }
    // printf("    ");
    // printf("%d", octeted_file );

    //this part increment
    int octed3;
    int octed_index=0;
    if(octeted_file==4)
    {
      int Allocated_size=octed;
      // printf("     ");
      // printf("%d", Allocated_size);
    }
    else
    {
      int Subnet_arr2[4]={256,512,1024,2048};

      while(octed>Subnet_arr2[octed_index])
      {
        octed_index++;
      }
      // printf("     ");
      octed3=octed_index+1;
      // printf("%d", octed3);
    }


    //Network address,mask, fires ip , lsat ip and Broadcast Address
    if(octeted_file==4) //this else is for octed 3
    {
      //Network address:
      int lf=i;
      if(lf==1)
      {
        printf("      ");
        printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address);
      }
      else
      {
        if(pervious_octed<=3)
        {
          printf("      ");
          printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address);
        }
        else
        {
          printf("      ");
          printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address);
        }

      }


      // Subnet Mask;
      int mask_peek_index=0;
      while(octed>Subnet_arr[mask_peek_index])
      {
        mask_peek_index++;
      }
      printf("     ");
      printf("/%d",(32-mask_peek_index)+1);

      //first IP Address
      int lf1=i;
      if(lf1==1)
      {
        printf("     ");
        printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address+1);
      }
      else
      {
        printf("     ");
        printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address+1);
      }
      Newtwork_address= Newtwork_address+octed; // this is Network address part:

      //lsat IP Address
      printf("     ");
      printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address-2);

      //Broadcast Address
      printf("     ");
      printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address-1);
    }
    else
    {
      //this else is for octed 3
      octeted_file = 3;

      // Network address:
      int lf=i;
      if(lf==1)
      {
        printf("      ");
        printf("%d.%d.%d.%d",a ,b ,c , Newtwork_address);
      }
      else
      {
        printf("      ");
        printf("%d.%d.%d.%d",a ,b ,Newtwork_address_octed3, Newtwork_address);
      }

      // Subnet Mask;
      int mask_peek_index=0;
      while(octed>Subnet_arr[mask_peek_index])
      {
        mask_peek_index++;
      }
      printf("     ");
      int mask1=(32-mask_peek_index)+1;
      printf("/%d",mask1);

      //first IP Address
      int lf1=i;
      if(lf1==1)
      {
        printf("     ");
        printf("%d.%d.%d.%d",a ,b ,Newtwork_address_octed3, Newtwork_address+1);
      }
      else
      {
        printf("     ");
        printf("%d.%d.%d.%d",a ,b ,Newtwork_address_octed3, Newtwork_address+1);
      }


      //lsat IP Address
      if(lf1==1)
      {
        address_ip = Subnet_arr[33-mask1];
      }
      printf("     ");
      printf("%d.%d.%d.%d",a ,b ,c++ , address_ip-2);

      //Broadcast Address
      printf("     ");
      printf("%d.%d.%d.%d",a ,b ,c++, address_ip-1);
    }

    pervious_octed = octeted_file;
    pervious_octed_number=octed3;
    Newtwork_address_octed3++;
    printf("\n");
  }
}

int main(int argc, char const *argv[])
{
  solve();
  return 0;
}
