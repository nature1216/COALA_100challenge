#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int n, m, start, dest;
vector<pair<int, int>> graph[1004];
int d[1004];
vector<int> route[1004];

void dijkstra(int start) {
	priority_queue<pair<int, int>> pq;

	pq.push({0, start});
	d[start] = 0;
	route[start].push_back(start);

	while(!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();

		if(d[now] < dist) continue;

		for(int i=0;i<graph[now].size();i++) {
			int cost = dist + graph[now][i].second;
			if(cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;
				pq.push({-cost, graph[now][i].first});
				int next = graph[now][i].first;

				route[next].assign(route[now].begin(), route[now].end());
				route[next].push_back(next);
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for(int i=0;i<m;i++) {
		int a, b, cost;
		cin >> a >> b >> cost;
		graph[a].push_back({b, cost});
	}

	fill_n(d, 1004, INF);

	cin >> start >> dest;

	dijkstra(start);

	cout << d[dest] << endl << route[dest].size() << endl;

	for(int i=0;i<route[dest].size();i++) {
		cout << route[dest][i] << ' ';
	}

	return 0;
}