#include <bits/stdc++.h>

using namespace std;

int n,m;
int indegree[32004];
vector<int> graph[32004];

void topologicalSort() {
	vector<int> result;
	queue<int> q;

	for(int i=1;i<=n;i++) {
		if(indegree[i] == 0) {
			q.push(i);
		}
	}

	while(!q.empty()) {
		int now = q.front();
		q.pop();

		result.push_back(now);
		for(int i=0;i<graph[now].size();i++) {
			indegree[graph[now][i]]--;
			if(indegree[graph[now][i]] == 0) {
				q.push(graph[now][i]);
			}
		}
	}

	for(int i=0;i<result.size();i++) {
		cout << result[i] << ' ';
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for(int i=0;i<m;i++) {
		int v1, v2;
		cin >> v1 >> v2;
		indegree[v2]++;
		graph[v1].push_back(v2);
	}

	topologicalSort();


	return 0;
}