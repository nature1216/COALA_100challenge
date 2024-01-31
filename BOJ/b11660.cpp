#include <bits/stdc++.h>

using namespace std;

int arr[1030][1030];
int sum[1030][1030];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			cin >> arr[i][j];
			sum[i][j] = arr[i][j] + sum[i][j-1];
		}
	}
	
	for(int i=0;i<m;i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int result = 0;
		for(int i=x1;i<=x2;i++) {
			// cout << sum[i][y2] << " " << sum[i][y1-1] << ' ';
			result += sum[i][y2] - sum[i][y1-1];
		}
		cout << result << '\n';

	}

	return 0;
}