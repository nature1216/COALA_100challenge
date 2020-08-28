#include<iostream>

using namespace std;

int ssg(int n, int m)
{
	int knf = 0, ard = 0;
	ard = n - 1;
	if (n == m)
		knf = 0;
	else if (m % n == 0)
		knf = m - 1 - ard;
	else
		knf = m + 1 - ard;

	return knf;
}

int main()
{
	int n, m; //m¸í n°³
	int ans = 0;
	scanf_s("%d %d", &n, &m);

	if (n > m)
	{
		ans = ssg(n - m, m);
	}
	else
	{
		ans = ssg(n, m);
	}
	printf("%d", ans);


	return 0;
}