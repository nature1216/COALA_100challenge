#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
bool visited[1004];
vector<int> graph[1004];

void bfs(int start) {
	queue<int> q;
	visited[start] = true;
	q.push(start);

	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for(int i=0;i<graph[x].size();i++) {
			int y = graph[x][i];
			if(!visited[y]) {
				q.push(y);
				visited[y] = true;
			}
		}
	}
	cnt++;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	for(int i=0;i<m;i++) {
		int v1, v2;
		cin >> v1 >> v2;
		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}

	int start = 1;

	for(int j=1;j<=n;j++) {
		if(!visited[j]) {
			bfs(j);
		} else {
			continue;
		}
	}

	cout << cnt;


	return 0;
}