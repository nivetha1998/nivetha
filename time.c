#include<stdio.h>
main()
{
int hr1,hr2,hr3,m1,m2,m3,time1,time2,time3;
scanf("%d %d %d %d",&hr1,&m1,&hr2,&m2);
time1=(hr1*60)+m1;
time2=(hr2*60)+m2;
time3=time1-time2;
if(time3<0)
{
time3=-time3;
}
hr3=time3/60;
m3=time3%60;
printf("%d %d",hr3,m3);
}
