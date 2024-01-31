#include<bits/stdc++.h>

using namespace std;

int sum[100004];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		sum[i+1] = x + sum[i];
	}

	for(int i=0;i<m;i++) {
		int x, y;
		cin >> x >> y;
		cout << sum[y] - sum[x-1] << '\n';
	}

	return 0;
}