#include <bits/stdc++.h>

using namespace std;

bool isPrime[4000004];
vector<int> v;

void isPrime2(int n) {

	for(int i=2;i<=n;i++) isPrime[i] = true;

	for(int i=2;i<=n;i++) {
		if(isPrime[i]) {
			v.push_back(i);
			for(int j=i*2;j<=n;j+=i) isPrime[j] = false;
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	isPrime2(n);

	int left = 0, right = 0;
	int cnt = 0;

	if(n != 1) {
		int sum = v[left];
		while(right < v.size()) {
			if(left > right) break;

			if(sum == n) {
				cnt++;
				sum += v[++right];
				sum -= v[left++];
			} else if(sum > n) {
				sum -= v[left++];
			} else {
				sum += v[++right];
			}
		}
	}



	cout << cnt;


	return 0;
}