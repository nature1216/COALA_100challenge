#include<stdio.h>


int num[99];
int main()

{
	int i, n=0;
	for(i=0;i<=4;i++)
	{
		scanf(" %d",&num[i]);
		if(num[i]<=40)
		{
			num[i]=40;
		}
		n=n+num[i];
	}
	printf("%d",n/5);
	
	return 0;
}
