#include<stdio.h>

int main()
{
	int A, B, C, D;
	
	scanf("%d %d\n%d %d", &A, &B, &C, &D);
	if(A+D<B+C)
	{
		printf("%d",A+D);
	}
	else
	{
		printf("%d",B+C);
	}
	
	return 0;
}
