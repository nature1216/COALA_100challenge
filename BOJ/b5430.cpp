#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	while(t>0) {
		string p;
		cin >> p;

		int n;
		cin >> n;

		bool flag = false;

		vector<int> v;

		char tmp;
		cin >> tmp;

		if(n == 0) {
			cin >> tmp;
		} else {
			for(int i=0;i<n;i++) {
				int x;
				cin >> x;
				v.push_back(x);
				cin >> tmp;
			}
		}

		for(int i=0;i<p.length();i++) {
			if(p.at(i) == 'R') {
				if(!v.empty()) {
					reverse(v.begin(), v.end());
				}
				
			} else if(p.at(i) == 'D') {
				if(v.empty()) {
					flag = true;
					break;
				}
				v.erase(v.begin());
			}
		}

		if(flag) {
			cout << "error\n";
		} else {
			if(v.size() == 0) {
				cout << "[]\n";
			} else {
				cout << '[';
				for(int i=0;i<v.size()-1;i++) {
					cout << v[i] << ',';
				}
				cout << v.back() << "]\n";
			}
		}

		t--;
	}


	return 0;
}