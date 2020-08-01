#include<stdio.h>

int main()

{
	int a, b, c, d,i,j;
	scanf("%d\n",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d %d %d",&b,&c,&d);
		if(b+d<c)
			{
				printf("advertise");
			}
			else if(b+d>c)
			{
				printf("do not advertise");
			}
			else
			{
				printf("does not matter");
			}
		
	}
	
	
	return 0;
 } 
