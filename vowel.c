#include<stdio.h>
main()
{
  char ch;
  scanf("%c",&ch);
  if(ch=='a'|| ch=='e'|| ch =='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch== 'E'|| ch=='I'||ch=='O'||ch=='U')
  {
    printf("vowel",ch);
  }
  else if(isalpha(ch))                                                                                                                                                                                                                                                                                                                                                                                                    
  {
    printf("consonant",ch);
  }
  else
  {
    printf("invalid",ch);
}
