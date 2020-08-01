#include<stdio.h>

int A[109];
int main()

{
	int n,k;
	scanf(" %d %d",&n,&k);
	int i;
	for(i=0;i<k;i++)
	{
		scanf("%d",&A[i]);
	}
	int a=0; 
	for(i=0;i<k;i++)
	{
		if(A[i]==3 || A[i]==4)
		{
			a=a+2;
		}
		else if(A[i]==5 || A[i]==6)
		{
			a=a+3;
		}
		else if(A[i]==7 || A[i]==8)
		{
			a=a+4;
		}
	}
	if(a>n || a==n)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	
	return 0;
}
