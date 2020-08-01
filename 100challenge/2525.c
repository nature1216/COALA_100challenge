#include<stdio.h>

int main()

{
	int h,m,r;
	scanf("%d %d\n%d",&h,&m,&r);
	int hour,min;
	hour=h+(m+r)/60;
	min=(m+r)%60;
	if(hour>23)
	{
		hour=hour%24;
	}
	printf("%d %d",hour,min);
	
	
	
	return 0;
}
