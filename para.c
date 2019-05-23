	#include<stdio.h>
  main()
  {
  char s[200];
int c=0,i;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='.'|| s[i]=='\0')
{
c++;
}
}
printf("%d",c+1);
}
