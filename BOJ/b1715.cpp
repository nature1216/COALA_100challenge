#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	priority_queue<int, vector<int>, greater<int>> num;
	cin >> n;
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		num.push(x);
	}

	int sum = 0;

	if(num.size() == 1) {
		cout << 0;
	} else {
		while(1) {
			int x = num.top();
			num.pop();
			int y = num.top();
			num.pop();
			sum += x + y;
			if(num.empty()) break;
			else {
				num.push(x+y);
			}
		}
		cout << sum;
	}

	return 0;
}