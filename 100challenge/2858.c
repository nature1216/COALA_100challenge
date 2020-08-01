#include<stdio.h>

int main()
{
	int r,b;
	scanf("%d %d",&r,&b);
	
	int L,W;
	int i=1;
	for(;i<b;i++)
	{
		if(i%b==0) return;
	}
	int j;
	j=b/i;
	printf("%d %d\n",i,j);
	if(i<=j)
	{
		L=j+2;
		W=i+2;
	}
	else
	{
		L=i+2;
		W=j+2;	
	}
	printf("%d %d\n",L,W);
	if((i+2)*(j+2)-i*j==r)
	{
		
		printf("%d %d",L,W);
	}
	
	return 0;
}
