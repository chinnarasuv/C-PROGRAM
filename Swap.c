#include<stdio.h>
#define fun main
int fun(void)
{
  int a=10,b=5;
  printf(" Before swapping a=%d and b=%d",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  ptinrf("After swapping a=%d and b=%d;",a,b);
}
  
  
