#include <bits/stdc++.h>

using namespace std;

int dp[44];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n;

	cin >> t;

	dp[1] = 1;

	for(int i=0;i<t;i++) {
		cin >> n;

		if(n == 0) {
			cout << "1 0\n";
			continue;
		} else if(n == 1) {
			cout << "0 1\n";
			continue;
		}

		for(int j=2;j<=n;j++) {
			dp[j] = dp[j-1] + dp[j-2];
		}

		cout << dp[n-1] << ' ' << dp[n] << '\n';
	}

	return 0;
}
