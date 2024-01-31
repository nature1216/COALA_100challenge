#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int cnt = 0;
	int start = 1;
	int end = start;
	int sum = 1;
	while(end <= n) {

		// cout << start << " " << end << " " << sum << '\n';

		if(sum == n) {
			cnt++;
			if(end == start) {
				break;
			}
			sum -= start;
			start++;
		} else if(sum < n) {
			end++;
			sum += end;
		} else if (sum > n) {
			sum -= start;
			start++;
		}
	}

	cout << cnt;



	return 0;
}