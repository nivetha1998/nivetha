#include <stdio.h>
int main(void) {
	int m,h;
	scanf("%d",&m);
	h=m/60;
	m=m%60;
	printf("%d %d",h,m);
	return 0;
}
