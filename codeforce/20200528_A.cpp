#include<iostream>
using namespace std;

int ans[509];

int main()
{
	int t=0, n, m, k;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d %d %d", &n, &m, &k);
		int score = 0;
		if ((m == 0) || ((m >= 2) && (n == k)))
		{
			score = 0;
		}
		else if (n / k >= m)
		{
			score = m;
		}
		else
		{
			int LeftJoker = 0;
			LeftJoker = m - n / k;
			if (LeftJoker % (k - 1) == 0)
			{
				score = n / k - (LeftJoker / (k - 1));
			}
			else
			{
				score = n / k - (LeftJoker / (k - 1) + 1);
			}
		}
		ans[i] = score;

	}
	for (int i = 0; i < t; i++)
	{
		printf("%d\n", ans[i]);
	}
	

	return 0;
}
