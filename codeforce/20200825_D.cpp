#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int cnt = 0;
	int t;
	scanf_s("%d", &t);
	for (int s = 0; s < t; s++)
	{
		int n;
		scanf("%d", &n);
		vector<int> a(n);
		int tmp;
		scanf("%d", &tmp);
		a.push_back(tmp);
		int ai, aj, ak, al;
		int chk1 = 0, chk2 = 0;
		for (int i = 0; i < n-3; i++)
		{
			for (int k = i + 2; k < n - 1; k++)
			{
				if (a[k] == a[i])
				{
					ai = i;
					ak = k;
				}
			}
			chk1 = 1;
		}
		for (int j = 2; j < n - 1; j++)
		{
			for (int l = j + 2; l < n; l++)
			{
				if (a[j] == a[l])
				{
					aj = j;
					al = l;

				}
			}
		}
		
	}

	return 0;
}