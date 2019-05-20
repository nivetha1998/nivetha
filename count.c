#include<stdio.h>
main()
{
  int n,count=0,i;
  scanf("%d",&n);
  while(n!=0)
  {
    n=n/10;
    ++count;
  }
  printf("%d",count);
}
