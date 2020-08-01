#include<stdio.h>

int num[9];
char a[9];
int main()

{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&num[j]);
		}
		int b=0,d=0;
		for(j=0;j<4;j++)
		{
			if(num[j]==1)
			{
				d=d+1;
			}
			else
			{
				b=b+1;
			}
		}
		if(b==1)
		{
			a[i]='A';
		}
		else if(b==2)
		{
			a[i]='B';
		}
		else if(b==3)
		{
			a[i]='C';
		}
		else if(b==4)
		{
			a[i]='D';
		}
		else
		{
			a[i]='E';
		}
	}
	for(i=0;i<3;i++)
	{
		printf("%c\n",a[i]);
	}
	
	return 0;
}
