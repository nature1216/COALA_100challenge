#include<iostream>
#include<math.h>

using namespace std;

int input[500009];
int ans[9];

int main()
{
	int n;

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &input[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (input[i] < input[j])
			{
				int tmp;
				tmp = input[i];
				input[i] = input[j];
				input[j] = tmp;
			}
		}
	}

	int total = 0;
	float fin;
	for (int i = 0; i < n; i++)
		total += input[i];
	fin = ceil(total / n);
	ans[0] = fin;

	int mid;
	mid = n / 2;
	ans[1] = input[mid];


	int freq = 1, cnt = 1,mode;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (input[i] == input[j])
				freq += 1;
		if (freq >= cnt)
		{
			mode = input[i];
			cnt = freq;
		}
	}
	if (cnt == 1)
		ans[2] = input[1];
	else
		ans[2] = mode;

	ans[3]=input[n-1] - input[0];

	for (int i = 0; i < 4; i++)
		printf("%d\n", ans[i]);


	return 0;
}