#include<stdio.h>

int main()
{
	int y, m,d,a;
	scanf("%d %d %d",&y,&m,&d);
	scanf("%d",&a);
	int age = 2020-y+1;
	if(m==1 || m==2)
	{
		if(a==age+1)
			printf("Breaker");
		else if(a==age)
			printf("Normal");
		else printf("Are you kidding me?");
	}
	else
	{
		if(a==age)
			printf("Normal");
		else
			printf("Are you kidding me?");
	}
	
	
	return 0;
}
