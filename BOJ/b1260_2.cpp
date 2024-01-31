#include <bits/stdc++.h>

using namespace std;

vector<int> graph[1004];
bool visited_dfs[1004];
bool visited_bfs[1004];

void dfs(int x) {
	visited_dfs[x] = true;
	cout << x << " ";
	for(int i=0;i<graph[x].size();i++) {
		int y = graph[x][i];
		if(!visited_dfs[y]) dfs(y);
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited_bfs[start] = true;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		cout << x << " ";
		for(int i=0;i<graph[x].size();i++) {
			int y = graph[x][i];
			if(!visited_bfs[y]) {
				q.push(y);
				visited_bfs[y] = true;

			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;

	for(int i=0;i<m;i++) {
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	for(int i=1;i<=n;i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	dfs(v);
	cout << '\n';
	bfs(v);


	return 0;
}