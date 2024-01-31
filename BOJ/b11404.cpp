#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int graph[104][104];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
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
	}

	for(int k=1;k<=n;k++) {
		for(int a=1;a<=n;a++) {
			for(int b=1;b<=n;b++) {
				graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
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


	return 0;
}