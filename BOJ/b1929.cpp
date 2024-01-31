#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool isPrime(int n) {
	if(n == 0 || n == 1) return false;
	for(int i=2;i<=sqrt(n);i++) {
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> m >> n;
	vector<bool> v(n+1, false);

	for(int i=m;i<=n;i++) {
		if(isPrime(i)) cout << i << endl;
	}

	return 0;
}

