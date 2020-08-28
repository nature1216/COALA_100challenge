#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> w;

int main()
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		int n;
		scanf("%d", &n);
		string s;
		cin >> s;
		if (s.size() == 1)
		{
			cout << s;
			continue;
		}
		string subs = s.substr(0,n);
		for (int j = 0; j < s.size(); j++)
		{
			w[j] = subs;

		}
	}



	return 0;
}