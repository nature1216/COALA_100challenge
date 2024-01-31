#include<bits/stdc++.h>

using namespace std;
#define endl '\n'

vector<bool> remote(10, true);

bool check(int i) {

	do {
		if(!remote[i%10]) return false;
		i /= 10;
	} while(i != 0);

	return true;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	int cnt = abs(n-100);

	vector<int> v;

	for(int i=0;i<m;i++) {
		int a;
		cin >> a;
		remote[a] = false;
	}

	// cout << "digit: " << digit;

	for(int i=0;i<=1000000;i++) {
		// cout << i << '\n';
		if(check(i)) {
			int tmp = i;
			int digit = 0;
			do {
				digit++;
				tmp /= 10;
			} while(tmp != 0);
			int cmp = abs(n-i) + digit;
			// cout << "n:" << n << " i:" << i << '\n';
			cnt = min(cmp, cnt);
		}
	}

	cout << cnt;


	return 0;
}