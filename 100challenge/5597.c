#include <stdio.h>
int arr[34];

int main()
{
	int i=0;
	int n;
	for(i=0;i<28;i++)
	{
		scanf("%d", &n);
		arr[n]=1;
	}
	for(i=1;i<=30;i++)
	{
		if(arr[i]==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
