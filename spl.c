#include<stdio.h>
main()
{
char str[50];
int i,c=0;
scanf("%s",&str[i]);
for(i=0;str[i]!='\0';i++)
{
if((str[i]>=48 && str[i]<=57)||(str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
{
c=c;
}
else
{
c++;
}
}
printf("%d",c);
}
