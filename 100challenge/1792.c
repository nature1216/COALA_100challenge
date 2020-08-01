#include<stdio.h>

int a[1000009];
int main()

{
	int n,i;
	scanf("%d",&n);
	int a,b,c,j;
	if(n==2)
	{
		scanf("%d %d",&a,&b);
		for(j=1;j<a;j++)
		{
			if(a%j==0 && b%j==0)
			{
				printf("%d\n",j);
			}
		}
	}
	else if(n==3) 
	{
		scanf("%d %d %d",&a,&b,&c);
		
		for(j=1;j<a;j++)
		{
			if(a%j==0 && b%j==0 && c%j==0)
			{
				printf("%d\n",j);
			}
		}
	}
	return 0;
}
