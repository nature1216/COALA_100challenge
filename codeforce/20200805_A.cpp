#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

vector<int> v;
vector<string> ans;

int main()
{
	int t;
	scanf("%d", &t);

	int n = 0;

	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);

		for (int j = 0; j < n; j++)
		{
			int m;
			scanf("%d", &m);
			v.push_back(m);
		}
		if (n == 1)
		{
			ans.push_back("YES");
			break;
		}
		sort(v.begin(), v.end());
		//		v.erase(unique(v.begin(), v.end()), v.end());
		//		for (int j = 0; j < v.size(); j++)
		//		{
		//			printf("%d ", v[j]);
		//		}
		//		printf("\n");
		//		printf("size : %d\n",v.size());
		if (v.size() == 1)
			ans.push_back("YES");
		else
		{
			//printf("v.size()!=1\n");
			int ch = 0;
			for (int j = 0; j < v.size() - 1; j++)
			{
				if (v[j + 1] - v[j] >= 2)
				{
					//					printf("impossible\n");
					ans.push_back("NO");
					break;
				}
				if (j == v.size() - 2)
				{
					//					printf("possible\n");
					ch = 1;
				}
			}
			if (ch == 1)
			{
				ans.push_back("YES");
			}
		}
		v.clear();
	}
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << "\n";
	}

	return 0;
}