#include<stdio.h>
main(void) {
	char str[50];
int i,c=0;
scanf("%s",&str[i]);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=48 && str[i]<=57)
{
c++;
}
else
{
c=c;
}
}
printf("%d",c);
}
