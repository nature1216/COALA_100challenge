#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, l;
	cin >> n >> l;

	deque<pair<int, int>> dq;

	for(int i=0;i<n;i++) {
		int now;
		cin >> now;
		while(dq.size() && dq.back().first > now) {
			dq.pop_back();
		}
		dq.push_back({now, i});
		if(dq.front().second <= i - l) {
			dq.pop_front();
		}
		cout << dq.front().first << ' ';
	}



	return 0;
}