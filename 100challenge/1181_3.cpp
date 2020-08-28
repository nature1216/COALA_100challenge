#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool cmp(string a, string b)
{
	if (a.length() == b.length())
		return a < b;

	return a.length() < b.length();
}


vector<string> v;

int main()
{
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (find(v.begin(), v.end(), str) == v.end())
			v.push_back(str);
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";



	return 0;
}