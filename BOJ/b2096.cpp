#include <bits/stdc++.h>

using namespace std;

int arr[4];
int dp_max[4];
int dp_min[4];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	cin >> arr[0] >> arr[1] >> arr[2];

	dp_max[0] = arr[0];
	dp_max[1] = arr[1];
	dp_max[2] = arr[2];

	dp_min[0] = arr[0];
	dp_min[1] = arr[1];
	dp_min[2] = arr[2];

	for(int i=1;i<n;i++) {
		cin >> arr[0] >> arr[1] >> arr[2];
		int tmp[] = {0, 0, 0};
		tmp[0] = arr[0] + max(dp_max[0], dp_max[1]);
		tmp[1] = arr[1] + max(max(dp_max[0], dp_max[1]), dp_max[2]);
		tmp[2] = arr[2] + max(dp_max[1], dp_max[2]);

		dp_max[0] = tmp[0];
		dp_max[1] = tmp[1];
		dp_max[2] = tmp[2];

		tmp[0] = arr[0] + min(dp_min[0], dp_min[1]);
		tmp[1] = arr[1] + min(min(dp_min[0], dp_min[1]), dp_min[2]);
		tmp[2] = arr[2] + min(dp_min[1], dp_min[2]);

		dp_min[0] = tmp[0];
		dp_min[1] = tmp[1];
		dp_min[2] = tmp[2];
	}

	cout << max(max(dp_max[0], dp_max[1]), dp_max[2]) << " " << min(min(dp_min[0], dp_min[1]), dp_min[2]);

	return 0;
}