#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int graph[104][104];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	vector<int> route[104][104];

	cin >> n >> m;

	for(int i=1;i<=n;i++) {
		fill(graph[i], graph[i] + 104, INF);
	}

	for(int a=1;a<=n;a++) {
		for(int b=1;b<=n;b++) {
			if (a == b) graph[a][b] = 0;
		}
	}

	for(int i=0;i<m;i++) {
		int a, b, c;
		cin >> a >> b >> c;

		graph[a][b] = min(c, graph[a][b]);

		if(route[a][b].size() == 2) {
			continue;
		}
		route[a][b].push_back(a);
		route[a][b].push_back(b);
	}

	for(int k=1;k<=n;k++) {
		for(int a=1;a<=n;a++) {
			for(int b=1;b<=n;b++) {
				if(graph[a][b] > graph[a][k] + graph[k][b]) {
					graph[a][b] = graph[a][k] + graph[k][b];					
					route[a][b].clear();
					route[a][b].assign(route[a][k].begin(), route[a][k].end());
					route[a][b].insert(route[a][b].end(), route[k][b].begin()+1, route[k][b].end());
				}
			}
		}
	}

	for(int a=1;a<=n;a++) {
		for(int b=1;b<=n;b++) {
			if(graph[a][b] == INF) {
				cout << 0 << ' ';
				continue;
			}
			cout << graph[a][b] << ' ';
		}
		cout << '\n';
	}

	for(int a=1;a<=n;a++) {
		for(int b=1;b<=n;b++) {
			cout << route[a][b].size() << ' ';
			for(int i=0;i<route[a][b].size();i++) {
				cout << route[a][b][i] << ' ';
			}
			cout << '\n';
		}
	}

	return 0;
}