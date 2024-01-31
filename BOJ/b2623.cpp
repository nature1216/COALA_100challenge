#include <bits/stdc++.h>


using namespace std;

int n,m;
vector<int> graph[1004];
int indegree[1004];

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
		if(result.size() < n) {
			cout << 0;
		} else {
			cout << result[i] << '\n';
		}
	}
}

int main() {
	
	cin >> n >> m;

	for(int i=0;i<m;i++) {
		int s, v1;
		cin >> s >> v1;
		for(int j=0;j<s-1;j++) {
			int v2;
			cin >> v2;
			if(find(graph[v2].begin(), graph[v2].end(), v1) != graph[v2].end()) {
				cout << 0;
				return 0;
			}
			graph[v1].push_back(v2);
			indegree[v2]++;
			v1 = v2;
		}

	}

	topologicalSort();

	return 0;
}