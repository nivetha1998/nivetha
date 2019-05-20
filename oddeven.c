#include<stdio.h>
void main()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  if(num>0) 
  {
      if(num%2==0)
      {
          printf("even");
      }
  else
  {
      printf("odd");
  }
  else
  {
    printf("invalid");
  }
  }
}
