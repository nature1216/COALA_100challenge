#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum1 = 0, sum2 = 0;
	cin >> n;

	vector<int> v;
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i=0;i<n;i++) {
		sum1 += v[i];
		sum2 += i;
	}
	
	cout << sum1 - sum2;
	return 0;
}