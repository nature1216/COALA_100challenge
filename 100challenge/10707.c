#include<stdio.h>

int main()

{
	int A,B,C,D,P,x,y;
	/* A:X사 리터당 요금
	   B:Y사 기본요금
	   C:Y사 기본요금 상한
	   D:Y사 리터당 추가요금*/ 
	scanf("%d\n%d\n%d\n%d\n%d",&A,&B,&C,&D,&P);
	x=A*P;
	if(P>C)
	{
		y=B+(P-C)*D;
	}
	else
	{
		y=B;
	}
	if(x<y)
	{
		printf("%d",x);
	}
	else if(x>y)
	{
		printf("%d",y);
	}
	
	
	return 0;
}
