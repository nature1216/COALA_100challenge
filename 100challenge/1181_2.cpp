#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool cmp(string& str1, string& str2)
{
	if (str1.size() == str2.size())
		return str1 < str2;
	return str1.size() < str2.size();
}

vector<string> v;

int main()
{
	int n;
	scanf_s("%d", &n);
	string str1;
	for (int i = 0; i < n; i++)
	{
		cin >> str1;

		v.push_back(str1);
	}
	printf("\n");

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1; j++)
			if (v[i].size() < v[j].size())
			{
				string tmp;
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}

	v.erase(unique(v.begin(), v.end()),v.end());

	


	
	for (int i = 0; i < n-1; i++)
		if (v[i].size() == v[i+1].size())
			if (v[i].compare(v[i + 1]) >= 0)
			{
				string tmp;
				tmp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = tmp;
			}
	for (int i = 0; i < n; i++)
		cout << v[i] << "\n";


	return 0;
}