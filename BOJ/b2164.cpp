#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	queue<int> q;
	bool flag = true;
	for(int i=1;i<=n;i++) {
		q.push(i);
	}

	while(q.size() != 1) {
		if(flag) { // pop
			q.pop();
			flag = false;
		} else { // push_back
			q.push(q.front());
			q.pop();
			flag = true;
		}
	}

	cout << q.front();


	return 0;
}