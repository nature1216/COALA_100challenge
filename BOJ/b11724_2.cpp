#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1004];
bool visitied[1004];

void dfs(int x) {
	visitied[x] = true;
	for(int i=0;i<graph[x].size();i++) {
		int y = graph[x][i];
		if(!visitied[y]) dfs(y);
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for(int i=0;i<m;i++) {
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	int cnt = 0;

	for(int i=1;i<=n;i++) {
		if(!visitied[i]) {
			dfs(i);
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}