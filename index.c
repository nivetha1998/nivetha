#include<stdio.h>
main()
{
int n,a[30],i;
scanf("%"d,&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("%d%d",a[i],i);
  }
 }
