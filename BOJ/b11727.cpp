#include <bits/stdc++.h>

using namespace std;

int d[1004];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	d[1] = 1;
	d[2] = 3;

	for(int i=3;i<=n;i++) {
		d[i] = (2*d[i-2]+d[i-1]) % 10007;
	}

	cout << d[n];

	return 0;
}