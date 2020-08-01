#include<stdio.h>

int ans_B[1009];
int ans_J[1009];
int main()

{
	int T,d,n,s,p;
	scanf("%d",&T);
	int i,B,J;
	for(i=0;i<T;i++)
	{
		scanf("%d %d %d %d",&d,&n,&s,&p);
		B=p*n+d;
		J=n*s;
		ans_B[i]=B;
		ans_J[i]=J;
	}
	for(i=0;i<T;i++)
	{
		if(ans_B[i]<ans_J[i])
		{
			printf("parallelize");
		}
		else if(ans_B[i]==ans_J[i])
		{
			printf("does not matter");
		}
		else
		{
			printf("do not parallelize");
		}
		printf("\n");
	}
	
	
	return 0;
}
