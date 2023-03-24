#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, t;

	cin >> t;

	for(int i=0;i<t;i++) {
		cin >> a >> b;
		cout << "Case #" << i+1 << ": " << a+b << "\n";
	}


	return 0;
}

