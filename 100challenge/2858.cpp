#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int r, b, total = 0;
	scanf_s("%d %d", &r, &b);
	total = r + b;
	int l, w;
	for (int i = 1; i <= b; i++)
	{
		if (b % i == 0)
		{
			w = i;
			l = b / i;
			if (l*2+w*2+4==r)
			{
				l += 2;
				w += 2;
				break;
			}
		}
	}
	if (l < w)
		swap(l, w);
	printf("%d %d", l, w);

	return 0;
}