#include<iostream>
#include<string>
using namespace std;

string tile[100009];
int ans[509];

int main()
{
	int t, n, m, x, y;
	int Xcost = 0, Ycost = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d %d %d", &n, &m, &x, &y);
		for (int j = 0; j < n; j++)
		{
			cin >> tile[j];
		}
		if (2 * x <= y)
		{
			ans[i] = x * (m + n);
		}
		else
		{
			for (int j = 0; j < m; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if ((tile[k][j] == '.'))
					{
						if ((tile[k][j + 1] == '.'))
						{
							Ycost += y;
							j++;
						}
						else if((tile[k][j + 1] == '*'))
						{
							Xcost += x;
						}
					}
					
				}
			}
			ans[i] = Xcost + Ycost;
		}
	}
	for (int i = 0; i < t; i++)
	{
		printf("%d\n", ans[i]);
	}

	return 0;
}

