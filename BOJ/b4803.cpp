#include <bits/stdc++.h>

using namespace std;

vector<int> v[504];
bool visited[504];

bool dfs(int here, int prev) {
	if(visited[here]) return true;
	visited[here] = true;
	for(int i : v[here]) {
		if(i != prev && dfs(i, here)) return true;
	}
	return false;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int tc = 1;
	cin >> n >> m;
	while(n != 0 || m != 0) {
		int t = 0;
		memset(visited, false, 504 * sizeof(bool));
		for(int i=1;i<=n;i++) v[i].clear();
		for(int i=0;i<m;i++) {
			int v1, v2;
			cin >> v1 >> v2;
			v[v1].push_back(v2);
			v[v2].push_back(v1);
			if(v1 == v2) visited[v1] = true;
		}
		for(int i=1;i<=n;i++) {
			if(!visited[i] && !dfs(i, -1)) t++;
		}
		cout << "Case " << tc << ": ";
		if(t > 1) {
			cout << "A forest of " << t << " trees.\n";
		} else if (t == 1) {
			cout << "There is one tree.\n";
		} else if(t == 0) {
			cout << "No trees.\n";
		}
		tc++;
		cin >> n >> m;
	}

	return 0;
}