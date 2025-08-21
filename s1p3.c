#include <stdio.h>
int incr1(int x)
{
    x=x+1;
    return x;
}
int main()
{
      int a=20;
      int *b;
      b=&a;
      printf("Value before increment = %d", *b);
      *b=incr1( *b);
      printf("\nValue after increment = %d", *b);
    return 0;
}