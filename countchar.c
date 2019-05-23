#include <stdio.h>

int main(void) {
	 char s[200];
    int count = 0, i;
 
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i]>=33&&s[i]<=126)
            count++; 
             
    }
    printf(" %d\n", count);

	return 0;
}
