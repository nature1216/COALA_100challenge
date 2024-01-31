#include <bits/stdc++.h>

using namespace std;

queue<int> q;

void exe(string cmd) {
	int e;
	if(cmd == "push") {
		cin >> e;
		q.push(e);
	} else if (cmd == "pop") {
		if(q.empty()) {
			cout << "-1\n";
		} else {
			cout << q.front() << endl;
			q.pop();
		}
	} else if (cmd == "size") {
		cout << q.size() << endl;
	} else if(cmd == "empty") {
		if(q.empty()) {
			cout << "1\n";
		} else {
			cout << "0\n";
		}
	} else if (cmd == "front") {
		if(q.empty()) {
			cout << "-1\n";
		} else {
			cout << q.front() << endl;
		}	
	} else if (cmd == "back") {
		if(q.empty()) {
			cout << "-1\n";
		} else {
			cout << q.back() << endl;
		}
	}
}


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for(int i=0;i<n;i++) {
		string s;
		cin >> s;
		exe(s);
	}

	return 0;
}