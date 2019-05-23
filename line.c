#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
 char s[1000];
 int i=0,c=0;
 gets(s);
 while(s[i]!='\0')
 {
   if((s[i]>=32&&s[i]<=45)||(s[i]>=47&&s[i]<=126))
   {
   if(s[i+1]=='.'||s[i+1]=='\0')
   c++;
   }
   i++;
 }
 printf("%d",c);
}
