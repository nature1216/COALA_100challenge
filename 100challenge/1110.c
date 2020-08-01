#include<stdio.h>

int main()

{
	int n,i=1;
	scanf("%d",&n);
	int a=n%10,b=n/10;
	int c=a+b;
	int d;
	if(c<10)
	{
		d=a*10+c;
	}
	else
	{
		d=a*10+c%10;
	}
	while(d!=n)
	{
		a=d%10;
		b=d/10;
		c=a+b;
		if(c<10)
		{
			d=a*10+c;
		}
		else
		{
			d=a*10+c%10;
		}
		i++;
	}
	printf("%d",i);
	
	
	return 0;
}
