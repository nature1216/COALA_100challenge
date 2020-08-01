#include<stdio.h>

int main()

{
	int n;
	scanf("%d",&n);
	if(n<5)
	{
		if(n%3==0)
		{
			printf("%d",n/3);
			return 0;
		}
		else
		{
			printf("-1");
			return 0;
		}
	}
	int i=0;
	while(1)
	{
		if(n%5!=0)
		{
			n-=3;
			i++;
		}
		else
		{
			printf("%d",i+n/5);
			break;
		}
	}
	
	
	
	return 0;
}
