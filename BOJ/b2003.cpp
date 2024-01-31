#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> a;

	cin >> n >> m;

	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}

	int cnt = 0;
	for(int i=0;i<n;i++) {
		int start = i;
		int end = start;
		int sum = a[start];

		while(end < n) {
			// cout << start <<  " " << end << " " << sum << '\n';
			if(sum == m) {
				cnt++;
				end++;
				break;
			} else if(sum > m) {
				break;
			} else end++;
			sum += a[end];
		}
	}

	cout << cnt;


	return 0;
}