#include<bits/stdc++.h>=

using namespace std;

typedef struct subject
{
	int first;
	int second;
};

int main()
{
	int n,m,q;
	scanf("%d %d %d",&n,&m,&q);
	subject s[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&s[i].first,&s[i].second);
	}
	for(int i=0;i<q;i++)
	{
		int c,d;
		scanf("%d %d",&c,&d);
		for(int i=0;i<m;i++)
		{
			if(c==s[i].first)
			{
				if(d==s[i].second)
				{
					if()
					printf("->\n");
				}
				
				else printf("<>\n");
			}
			else if(d==s[i].first)
			{
				if(c==s[i].second)
					printf("<-\n");
				else printf("<>\n");
			}
			
		}
	}
//	for(int i=0;i<m;i++)
//		printf("%d %d",s[i].first, s[i].second);
	
	
	return 0;
}
