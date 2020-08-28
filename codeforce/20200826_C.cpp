#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{
		char s[100004] = { 0 };
		string w;
		cin >> w;
		int x;
		int n = w.size();
		scanf_s("%d", &x);
		for (int j = 0; j < n; j++)
		{
			if (j > x && w[j - x] == '1')
				s[j] = '1';
			else if (j + x <= n && w[j + x] == '1')
				s[j] = '1';
			else
				s[j] = '0';
		}
		cout << s << "\n";
	}

	return 0;
}