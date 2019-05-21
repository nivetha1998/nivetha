#include<stdio.h>
main()
{
int n,r,temp,sum=0;
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(sum==temp)
printf("yes");
else
printf("no");
}
