#include <stdio.h>
int main()
{
  char a;
  printf("\n Please Enter alphabet\n");
  scanf(" %c", &a);
  if (isalpha(a))
   {
     a = toupper(a);
     printf ("\n converted character is %c", a);
   }
   else
   {
     printf("\n Enter Valid Alphabet");
   }
    return 0;
}


