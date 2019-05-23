#include<stdio.h>
main()
{
int greatest,i,a[10];
for(i=1;i<10;i++)
{
scanf("%d",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest=a[i];
}
}
printf("%d\t",greatest);
}

