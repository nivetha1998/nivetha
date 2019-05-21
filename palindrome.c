#include<stdio.h>
main()
{
int n,sum=0,r,temp;
scanf("%d",&n);
temp=n;
while(n>0)
{
  r=n%10;
  sum=(sum*10)+r;
  n=n/10;
 }
if(temp==sum)
{
	printf("yes");
}
else
{
	printf("no");
}
if(n>1000)
{
	printf("no");
}
return 0;
}
