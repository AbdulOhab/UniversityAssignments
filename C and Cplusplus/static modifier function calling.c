#include <stdio.h>

void f(void);

int main(void)
{
  int i;

  for(i=0; i<10; i++) f();

  return 0;
}

void f(void)
{
  static int count = 0;

  count++;
  printf("count is %d\n", count);
}
