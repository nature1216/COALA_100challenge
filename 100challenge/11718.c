#include<stdio.h>

int main()

{
	char c;
	while(1)
	{
		scanf("%c",c);
		if(scanf("%c",c)==EOF)
		{
			break;
		}
		else
		{
			printf("%c",c);
		}
	}
	
	return 0;
 } 
