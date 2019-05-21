#include<stdio.h>
main()
{
int low,high,i;
scanf("%d%d",&low,&high);
for(i=low+1;i<high;i++)
{
  if(i%2==0)
  {
      printf("%d",i);
   }
}
}
