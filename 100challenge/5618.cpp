#include<iostream>

using namespace std;

void n2(int m1, int m2)
{
	for (int i = 0; i < m2; i++)
		if (m1 % i == 0 && m2 % i == 0)
			printf("%d\n", i);
}

void n3(int m1, int m2, int m3)
{
	for (int i = 0; i < m3; i++)
		if (m1 % i == 0 && m2 % i == 0 && m3 % i == 0)
			printf("%d\n", i);
}

int main()
{
	int n;
	int m1, m2, m3;
	scanf("%d", &n);
	if (n == 2)
	{
		scanf("%d %d", &m1, &m2);
		n2(m1, m2);
	}
	else
	{
		scanf("%d %d %d", &m1, &m2, &m3);
		n3(m1, m2, m3);
	}


	return 0;
}