#include <stdio.h>

int main(void) {
	char s[200];
int c=0,i;
scanf("%[^\n]s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
c++;
}
}
printf("%d",c);
	return 0;
}
