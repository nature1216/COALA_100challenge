#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<stdlib.h>

using namespace std;

vector<int> cnt(8001);

int main()
{
	int n, total = 0,max=0;
	vector<int> mode;
	scanf_s("%d", &n);
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &v[i]);
		total += v[i];
		int t = (v[i] <= 0) ? abs(v[i]) : v[i] + 4000;
		cnt[t]++;
		if (max < cnt[t]) max = cnt[t];
	}
	double avg = total / (double)n;
	sort(v.begin(), v.end());
	int fmode=0;
	int mid = v[n / 2 ];
	int range = v.back() - v.front();
	for (int i = -4000; i < 4001; i++)
	{
		int t = (i <= 0) ? abs(i) : i + 4000;
		if (cnt[t] == max) mode.push_back(i);
	}
	if (mode.size() == 1) fmode = mode[0];
	else
	{
		sort(mode.begin(), mode.end());
		fmode = mode[1];
	}
	printf("%.0f\n%d\n%d\n%d", avg, mid, fmode, range);



	return 0;
}