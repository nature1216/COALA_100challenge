#include <bits/stdc++.h>

using namespace std;

int arr[1004][1004];
int dp[1004][1004];

int main() {
	ios_base :: sync_with_stdio(false);
	
	int n, m;

	scanf("%d %d", &n, &m);

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			scanf("%1d", &arr[i][j]);
		}
	}

	for(int i=0;i<m;i++) {
		dp[0][i] = arr[0][i];
	}

	for(int i=0;i<n;i++) {
		dp[i][0] = arr[i][0];
	}

	for(int i=1;i<n;i++) {
		for(int j=1;j<m;j++) {
			if(arr[i][j] == 0) {
				continue;
			}
			dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
		}
	}

	int max_num = 0;
	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			max_num = max(max_num, dp[i][j]);
		}
	}

	cout << pow(max_num, 2);


	return 0;
}