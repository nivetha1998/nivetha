#include<stdio.h>
main()
{
int i, j, temp, n, a[50],median;
        scanf("%d", &n);
        for (i = 1; i <=n; i++)
            scanf("%d", &a[i]);
 
        for (i = 1; i <=n; i++) 
        {
            for (j = i + 1; j <=n; j++)
            {
                if (a[i] > a[j]) 
                {
                    temp =  a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
 median=(n+1)/2;
 printf("%d",a[median]);
}
