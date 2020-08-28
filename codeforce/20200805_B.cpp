#include<iostream>
#include<vector>

using namespace std;

vector<int> a;
vector<int> b;
vector<int> ansa;
vector<int> ansb;

long long ans[1009];

int main()
{
	int t;
	scanf_s("%d", &t);
	int n, tmp, mina = 0, minb = 0;
	for (int i = 0; i < t; i++)
	{
		scanf_s("%d", &n);
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &tmp);
			a.push_back(tmp);
		}
		for (int j = 0; j < n; j++)
		{
			scanf_s("%d", &tmp);
			b.push_back(tmp);
		}
		/*for (int j = 0; j < n; j++)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("%d ", b[j]);
		}
		printf("\n");*/
		mina = a[0];
		minb = b[0];
		for (int j = 0; j < n; j++)
		{
			if (mina > a[j])
				mina = a[j];
		}
		for (int j = 0; j < n; j++)
		{
			if (minb > b[j])
				minb = b[j];
		}
	//	printf("mina : %d, minb : %d\n", mina,minb);
		for (int j = 0; j < n; j++)
		{
			ansa.push_back(a[j] - mina);
		}
		for (int j = 0; j < n; j++)
		{
			ansb.push_back(b[j] - minb);
		}
		/*for (int j = 0; j < n; j++)
		{
			printf("%d ", ansa[j]);
		}
		printf("\n");
		for (int j = 0; j < n; j++)
		{
			printf("%d ", ansb[j]);
		}
		printf("\n");*/
		for (int j = 0; j < n; j++)
		{
			if (ansa[j] <= ansb[j])
				ansa[j] = ansb[j];
		}
		/*for (int j = 0; j < n; j++)
		{
			printf("%d ", ansa[j]);
		}
		printf("\n");
		*/
		int total=0;
		for (int j = 0; j < n; j++)
		{
			total += ansa[j];
		}
		ans[i] = total;
		a.clear();
		b.clear();
		ansa.clear();
		ansb.clear();
	}
	for (int i = 0; i < t; i++)
		cout << ans[i]<<"\n";
	return 0;
}