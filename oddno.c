#include<stdio.h>
main()
{
int l1,l2,i;
scanf("%d%d",&l1,&l2);
for(i=l1+1;i<l2;++i)
{
  if(i%2==1)
    {
      printf("%d\t",i);
    }
 }
 }
