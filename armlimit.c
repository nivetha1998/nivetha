#include<stdio.h>
#include<math.h>
main()
{
	int i,j,sum=0,n,t1,t2,l1,l2;
scanf("%d%d",&l1,&l2);
for(i=l1;i<l2;i++)
{
t1=i;
t2=i;
while(t1>0)
{
j=t1%10;
sum+=pow(j,3);
t1=t1/10;
}
if(sum==t2)
 {
printf("%d",sum);
 }
}
	return 0;
}
