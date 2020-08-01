#include<stdio.h>

int main()

{
	int n,i,j,k,m,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<n+1;i++)
	{
		for(m=0;m<1+i;m++)
		{
			printf(" ");
		}
		for(l=2*n-i-3;l>=i+1;l--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
 } 
