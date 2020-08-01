#include<stdio.h>

int main()

{
	int a, b, c, d ,n,min,sec;
	scanf("%d\n%d\n%d\n%d",&a, &b, &c, &d);
	n=a+b+c+d;
	if(n>=60)
	{
		min=n/60;
		sec=n%60;
	}
	printf("%d\n%d",min, sec);
	
	return 0;
}
