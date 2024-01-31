#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	if(n == 1) {
		cout << "*";
	} else {
		for(int i=0;i<n;i++) {
			for(int j=1;j<n-i;j++) cout << " ";
			for(int j=0;j<i+1;j++) {
				if(j == 0) cout << "*";
				else cout << " *";
			}
			cout << "\n";
		}
	}

	return 0;
}