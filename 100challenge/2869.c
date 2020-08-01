#include<stdio.h>

int main()
{
	int A,V,B;
	scanf("%d %d %d",&A,&B,&V);
	int i,a=0,b;
	for(i=0;i<V;i++)
	{
		a=a+A;
		if(a>=V)
		{
			break;
		}
		b=a-B;
		printf("%d %d\n",&a,&b);
	}
	/*printf("%d",i);*/
	return 0;
}
