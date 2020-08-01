#include<stdio.h>

int a[4];
char b[4];
int main()

{
	int i;
	for(i=0;i<3;i++)
	{
		scanf(" %d",&a[i]);
	}
	for(i=0;i<2;i++)
	{
		int t;
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	if(a[0]>a[1])
	{
		int t=a[0];
		a[0]=a[1];
		a[1]=t;
	}
	scanf("%s",b);
	for(i=0;i<3;i++)
	{
		printf("%d ",a[b[i]-'A']);
	}

	return 0;
}
