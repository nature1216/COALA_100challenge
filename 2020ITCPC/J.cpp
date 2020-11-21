#include<bits/stdc++.h>
using namespace std;

int h[100009];

int main()
{
	int a, b,p,q;
	
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		p=b;
		q=a;
	}
	else
	{
		p=a;
		q=b;
	}
	int cnt=0;
	for(int i=1;i<=p;i++)
	{
		if(p%i==0 && i%q!=0)
		{
			h[cnt]=i;
			cnt++;
		}
	}
//	for(int i=0;i<cnt;i++)
//		printf("%d ",h[i]);
	int ans=0;
	for(int i=0;i<cnt;i++)
		if(h[i]%2==0)
			ans++;
			
	cout<<ans;
	
	
	return 0;
}
