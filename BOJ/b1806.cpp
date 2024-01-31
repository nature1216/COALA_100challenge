#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, s;
	cin >> n >> s;

	vector<int> v;

	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int left = 0, right = 0;
	int min = n+1;
	int sum = v[left];

	while(right <= n) {

		if(left > right) break;
		// cout << "left: " << left << " right: " << right << " sum: " << sum << " min: " << min << '\n';
		if(sum >= s) {
			min = right-left+1 < min ? right-left+1 : min;
			sum -= v[left++];
		} else {
			sum += v[++right];
		}
	}

	if(min >= n+1) cout << 0;
	else cout <<  min;


	return 0;
}