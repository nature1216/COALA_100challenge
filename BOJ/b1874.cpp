#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	stack<int> stack;
	int a=0;

	for(int i=0;i<n;i++) {
		int t;
		cin >> t;
		if(a < t) {
			for(int j=1;j<=t;j++) {
				stack.push(j);
			}
		} else {
			cin << top() << " " << endl;
			stack.pop();
		}
		a = t;
	}


	return 0;
}