#include <bits/stdc++.h>

using namespace std;

int dp[1004][1004];

int binomial(int n, int r) {
	if(r == 0 || r == n) return dp[n][r] = 1;
	if(r > n) return 0;
	if(dp[n][r] > 0) return dp[n][r];

	return dp[n][r] = (binomial(n-1, r) + binomial(n-1, r-1)) % 10007;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,k;

	cin >> n >> k;

	cout << binomial(n, k);


	return 0;
}