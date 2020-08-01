#include<stdio.h>

int month[19]={0,0,31,59,90,120,151,181,212,243,273,304,334};
int main()

{
	int x,y;
	scanf("%d %d",&x,&y);
	int t;
	t=(month[x]+y)%7;
	if(t==1)
	{
		printf("MON");
	}
	else if(t==2)
	{
		printf("TUE");
	}
	else if(t==3)
	{
		printf("WED");
	}
	else if(t==4)
	{
		printf("THU");
	}
	else if(t==5)
	{
		printf("FRI");
	}
	else if(t==6)
	{
		printf("SAT");
	}
	else if(t==0)
	{
		printf("SUN");
	}
	
	return 0;
}
