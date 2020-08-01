#include<stdio.h>

int main()

{
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int add,ans;
	add=a*a+b*b+c*c+d*d+e*e;
	ans=add%10;
	printf("%d",ans);
	
	return 0;
}
