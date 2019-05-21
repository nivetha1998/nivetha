#include<stdio.h>
main()
{
int i,num,largest,a[30];
scanf("%d",&num);
for(i=0;i<num;i++)
  scanf("%d",&a[i]);
  largest=a[0];
 for(i=0;i<num;i++)
 {
    if(a[i]>largest)
    {
    largest=a[i];
    }
 }
 printf("%d",largest);
return 0;
}
