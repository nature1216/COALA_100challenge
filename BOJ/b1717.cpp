#include <bits/stdc++.h>

using namespace std;

int find(int v, vector<int>& root) {
	if(root[v] == v) return v;
	return root[v] = find(root[v], root);
}

void merge(int u, int v, vector<int>& root) {
	u = find(u, root);
	v = find(v, root);
	if(u == v) return;
	root[u] = v;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n,m;
	cin >> n >> m;
	vector<int> root(n+1);

	for(int i=1;i<=n;i++) root[i] = i;

	for(int i=0;i<m;i++) {
		int x, a, b;
		cin >> x >> a >> b;
		if(x == 1) { // output
			if(find(a, root) == find(b, root)) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		} else if(x == 0) { // 합집합
			merge(a, b, root);
		}
	}

	return 0;
}