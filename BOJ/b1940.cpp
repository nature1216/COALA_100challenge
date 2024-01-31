#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> num;
	cin >> n >> m;

	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		num.push_back(a);
	}

	sort(num.begin(), num.end());

	int start = 0, end = n-1;
	int cnt = 0;

	while(start < end) {
		if(num[start] + num[end] == m) {
			cnt++;
			end--;
			start++;
		} else if(num[start] + num[end] < m) {
			start++;
		} else if(num[start] + num[end] > m){
			end--;
		}
	}

	cout << cnt;


	return 0;
}