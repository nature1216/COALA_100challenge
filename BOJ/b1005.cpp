#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n,k,w;
vector<int> graph[1004];
vector<int> in_from[1004];
int build_time[1004];
int indegree[1004];
int cost[1004];

int topologicalSort() {
	queue<int> q;

	for(int i=1;i<=n;i++) {
		if(indegree[i] == 0) {
			q.push(i);
			cost[i] = build_time[i];
		}
	}

	while(!q.empty()) {
		int now = q.front();
		q.pop();

		for(int i=0;i<graph[now].size();i++) {
			indegree[graph[now][i]]--;
			if(indegree[graph[now][i]] == 0) {
				q.push(graph[now][i]);

				int max = 0;
				for(int j=0;j<in_from[graph[now][i]].size();j++) {
					if(max < cost[in_from[graph[now][i]][j]]) max = cost[in_from[graph[now][i]][j]];
				}
				cost[graph[now][i]] = build_time[graph[now][i]] + max;
			}
		}
	}
	return cost[w];

}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for(int test_case=0;test_case<t;test_case++) {
		cin >> n >> k;

		fill_n(build_time, n+1, 0);
		fill_n(indegree, n+1, 0);
		fill_n(cost, n+1, 0);

		for(int i=1;i<=n;i++) {
			graph[i].clear();
			in_from[i].clear();
		}

		for(int i=1;i<=n;i++) {
			int d;
			cin >> d;
			build_time[i] = d;
		}

		for(int i=0;i<k;i++) {
			int x, y;
			cin >> x >> y;
			graph[x].push_back(y);
			in_from[y].push_back(x); // y한테 x에서 오는 간선이 있음
			indegree[y]++; 
		}

		cin >> w;

		cout << topologicalSort() << '\n';
	}

	return 0;
}
