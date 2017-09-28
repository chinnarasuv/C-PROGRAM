#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the no:");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b)
    {
      printf(" A is Greater\n");
    }
  else if(b>c)
    {
      printf("B is greater\n");
    }
  else
    {
      printf(" C is greater");
    }
    
 }
