#include<stdio.h>
main()
{
int i,num,smallest,a[30];
scanf("%d",&num);
for(i=0;i<num;i++)
  scanf("%d",&a[i]);
  smallest=a[0];
 for(i=0;i<num;i++)
 {
    if(a[i]<smallest)
    {
    smallest=a[i];
    }
 }
 printf("%d",smallest);
 }
    
