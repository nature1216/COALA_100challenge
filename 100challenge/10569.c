#include<stdio.h>

int shape[];
int main()

{
	int T,V,E;
	
	scanf("%d",&T);
	int i;
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&V,&E);
		shape[i]=2-V+E;
	}
	for(i=0;i<T-1;i++)
	{
		printf("%d\n",shape[i]);
	}
	printf("%d",shape[T-1]);

	
	return 0;
}
