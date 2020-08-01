#include<bits/stdc++.h>
using namespace std;

int sum[1000009];

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&sum[i]);
	}
	sort(sum,sum+n);
	for(int i=0;i<n;i++)
	{
		printf("%d\n",sum[i]);
	}
	
	return 0;
}
