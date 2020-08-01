#include<stdio.h>

int A[1000009];
int B[1000009];
int main()

{
	int T;
	scanf("%d",&T);
	int i;
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&A[i],&B[i]);
	}
	for(i=0;i<T;i++)
	{
		printf("%d",A[i]+B[i]);
		printf("\n");

	}
	
	return 0;
}
