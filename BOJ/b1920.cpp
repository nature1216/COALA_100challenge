#include <bits/stdc++.h>

using namespace std;

int a[100004];

int binary_search(int start, int end, int target) {
	if(start > end) return 0;

	int mid = (start+end) / 2;

	if(a[mid] > target) {
		return binary_search(start, mid-1, target);
	} else if(a[mid] < target) {
		return binary_search(mid+1, end, target);
	} else if(a[mid] == target) {
		// cout << "a[mid]: " << a[mid] << '\n';
		return 1;
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;

	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}

	sort(a, a+n);

	cin >> m;
	for(int i=0;i<m;i++) {
		int target;
		cin >> target;
		cout << binary_search(0, n-1, target) << '\n';
	}

	return 0;
}