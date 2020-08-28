#include<iostream>

using namespace std;

int ssj(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{

	int n, m;
	scanf_s("%d %d", &n, &m);
	printf("%d", m - ssj(n, m));



	return 0;
}