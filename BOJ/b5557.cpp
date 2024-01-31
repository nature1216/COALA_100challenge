#include<bits/stdc++.h>

using namespace std;

int nums[104];
long long dp[104][24];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for(int i=1;i<=n;i++) {
		cin >> nums[i];
	}

	dp[1][nums[1]] = 1;

	for(int i=2;i<=n;i++) {
		for(int j=0;j<=20;j++) {
			if(dp[i-1][j] == 0) continue;

			if(j + nums[i] <= 20) {
				dp[i][nums[i]+j] += dp[i-1][j];

			}
			
			if(j - nums[i] >= 0) {
				dp[i][j-nums[i]] += dp[i-1][j];
			}
		}
	}

	cout << dp[n-1][nums[n]];


	return 0;
}