#include<stdio.h>
main()
{
int i,n,t1=1,t2=1,next;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\t",t1);
next=t1+t2;
t1=t2;
t2=next;
}
}
