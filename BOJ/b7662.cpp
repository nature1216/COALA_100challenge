#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for(int i=0;i<t;i++) {
		int k;
		cin >> k;
		multiset<int> ms;
		for(int j=0;j<k;j++) {
			char op;
			int n;
			cin >> op >> n;
			if(op == 'D') { // delete
				if(ms.empty()) continue;
				if(n == -1) {
					ms.erase(ms.begin());
				} else if (n == 1) {
					auto iter = ms.end();
					iter--;
					ms.erase(iter);
				}
					
			} else if (op == 'I') { // insert
				ms.insert(n);
			}
		}
		if(ms.empty()) {
			cout << "EMPTY\n";
		} else {
			auto iter = ms.end();
			iter--;
			cout << *iter << " " << *ms.begin() << '\n';
		}
		
	}


	return 0;
}