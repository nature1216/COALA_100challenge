#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

vector<pair<int, int> > graph[10004];
int d_student[1004]; // 가는 시간
int d_back[10004]; // X에서 돌아가는 시간
int d[10004];

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
				pq.push({-cost, graph[now][i].first});
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, x;

	cin >> n >> m >> x;

	for(int i=0;i<m;i++) {
		int a, b, t;
		cin >> a >> b >> t;
		graph[a].push_back({b, t});
	}

	fill_n(d, 10004, INF);
	dijkstra(x);

	copy(begin(d), end(d), d_back);

	for(int i=1;i<=n;i++) {
		fill_n(d, 10004, INF);
		dijkstra(i);

		d_student[i] = d[x] + d_back[i];
	}

	int max_value = 0;

	for(int i=1;i<=n;i++) {
		if(max_value < d_student[i]) {
			max_value = d_student[i];
		}
	}

	cout << max_value;


	return 0;
}
