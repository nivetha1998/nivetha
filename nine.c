#include<stdio.h>
main()
{
int a[20],n,i,k,c=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		c=c+a[i];
	}
	printf("%d",c);
}
