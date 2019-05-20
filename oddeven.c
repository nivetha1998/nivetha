#include<stdio.h>
void main()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  if(num<0)
    printf("invalid");
  else if(num%2==0)
    printf("even");
  else
    printf("odd");
  }
