#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int graph[204][204];
int candidate[204];

int main() {
	ios_base :: sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n, m, k, c;
	vector<int> friends;

	cin >> n >> m;

	for(int i=0;i<=n;i++) {
		fill(graph[i], graph[i]+204, INF);
		// fill(candidate, candidate+204, INF);
	}

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(i == j) graph[i][j] = 0;
		}
	}

	for(int i=0;i<m;i++) {
		int a, b, t;

		cin >> a >> b >> t;

		graph[a][b] = t;
	}

	for(int i=1;i<=n;i++) {
		for(int a=1;a<=n;a++) {
			for(int b=1;b<=n;b++) {
				graph[a][b] = min(graph[a][b], graph[a][i] + graph[i][b]);
			}
		}
	}

	cin >> k;

	for(int i=0;i<k;i++) {
		int c;
		cin >> c;
		friends.push_back(c);
	}

	for(int i=0;i<k;i++) {
		int now = friends[i];

		for(int j=1;j<=n;j++) {
			if(graph[now][j] + graph[j][now] > candidate[j]) {
				candidate[j] = graph[now][j] + graph[j][now];
			}
		}
	}

	int minValue = INF;
	vector<int> results;

	for(int i=1;i<=n;i++) {
		if(minValue > candidate[i]) {
			minValue = candidate[i];
		}
	}

	for(int i=1;i<=n;i++) {
		if(candidate[i] == minValue) {
			results.push_back(i);
		}
	}

	for(int i=0;i<results.size();i++) {
		cout << results[i] << ' ';
	}


	return 0;
}
