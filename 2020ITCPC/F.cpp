#include<bits/stdc++.h>

using namespace std;

char p[1009];
int cnt[26];


int main()
{
	int q;
	scanf("%s",&p);
	scanf("%d",&q);
	for(int i=0;i<q;i++)
	{
		int n, s, e;
		scanf("%d %d %d",&n,&s,&e);
		
		if(n==1)
		{
			reverse(p+s-1, p+e);
			cout<<"Query #"<<i+1<<" : "<<p<<"\n";
		}
		else if(n==2)
		{
			cout<<"Query #"<<i+1<<" : ";
			for(int j=s-1;j<e;j++)
			{
				for(int k=0;k<26;k++)
				{
					if((int)p[j]==k+97) cnt[k]++;
				}				
			}
			for(int k=0;k<26;k++)
				printf("%d ",cnt[k]);
			for(int k=0;k<26;k++)
				cnt[k]=0;
				printf("\n");
		}
	}
	
	
	return 0;
}
