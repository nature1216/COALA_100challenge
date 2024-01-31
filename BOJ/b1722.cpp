#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, p;
	vector<int> v;

	cin >> n >> p;

	if(p == 1) {
		cin >> k;
		for(int i=1;i<=n;i++) {
			v.push_back(i);
		}

		int cnt = 0;

		do {
			cnt++;
			if(cnt == k) {
				for(int i=0;i<v.size();i++) {
					cout << v[i] << " ";
				}
			}
			
		} while(next_permutation(v.begin(), v.end()));


	} else if(p == 2) {
		vector<int> tmp;
		for(int i=0;i<n;i++) {
			int v1;
			cin >> v1;
			v.push_back(v1);
			tmp.push_back(i+1);
		}

		int cnt = 0;

		do {
			cnt++;
			for(int i=0;i<tmp.size();i++) {
				if(tmp[i] != v[i]) break;
				if(i == tmp.size()-1) cout << cnt;
			}
		} while(next_permutation(tmp.begin(), tmp.end()));
	}

	return 0;
}

aazz
azaz
