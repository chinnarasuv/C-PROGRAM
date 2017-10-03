#include<stdio.h>
void main()
{
  int a, b, c=0;
  printf("enter the Number:");
  scanf("%d",&b);
  for(a=1;a<=b;a++)
  {
    c=c+a;
  }
   printf ("Sum of first %d natural numbers = %d\n", b, c);
}
