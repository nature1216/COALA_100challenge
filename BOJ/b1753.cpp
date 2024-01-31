#include <bits/stdc++.h>
#define endl '\n'
#define INF 1e9

using namespace std;

int v, e, k;
vector<pair<int, int>> graph[20004];
int d[200004];

void dijkstra(int start) {
	priority_queue<pair<int, int>> pq;

	pq.push({0, start});
	d[start] = 0;

	while(!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;

		pq.pop();

		if(d[now] < dist) continue;

		for(int i=0;i<graph[now].size();i++) {
			int cost = dist + graph[now][i].second;

			if(cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;

				
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> v >> e >> k;

	for(int i=0;i<e;i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a].push_back({b, c});
	}

	fill_n(d, 200004, INF);

	dijkstra(k);

	for(int i=1;i<=v;i++) {
		if(d[i] == INF) {
			cout << "INF\n";
		} else {
			cout << d[i] << endl;
		}
	}

	return 0;
}