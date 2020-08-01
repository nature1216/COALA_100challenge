#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> arr;
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int tmp;
		scanf("%d", &tmp);
		arr.push_back(tmp);//vector 입력 방식 
	}
	sort(arr.begin(), arr.end());
	for(int i=0;i<n;i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
