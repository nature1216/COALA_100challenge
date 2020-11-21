#include<bits/stdc++.h>
using namespace std;

float score[100009];

bool cmp(int a, int b) { return a>b; }

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%f",&score[i]);
	sort(score, score+n, cmp);
	int cnt=0;
	float rate = 0.9;
	printf("%f",rate);
	for(int i=0;i<n-1;i++)
	{
		float pct = score[i]*rate;
		for(int j=1;j<n-i;j++)
		{
			if(pct<=score[i+j])
			{
				cnt++;
				continue;
			}
			else break;
		}
	}
	printf("%d",cnt);
	
	return 0;
}
