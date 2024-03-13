#include <bits/stdc++.h>

using namespace std;

int parent[1004];
vector<pair<int, pair<int, int>>> graph;

int findParent(int x) {
	if(x == parent[x]) return x;
	return parent[x] = findParent(parent[x]);
}

void unionParent(int a, int b) {
	a = findParent(a);
	b = findParent(b);

	if(a < b) parent[b] = a;
	else parent[a] = b;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int n;
	long result = 0;

	cin >> n;

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			int c;
			cin >> c;
			graph.push_back({c, {i, j}});
		}
	}

	for(int i=1;i<=n;i++) {
		parent[i] = i;
	}

	sort(graph.begin(), graph.end());

	for(int i=0;i<graph.size();i++) {
		int cost = graph[i].first;
		int a = graph[i].second.first;
		int b = graph[i].second.second;

		if(findParent(a) != findParent(b)) {
			unionParent(a, b);
			result += cost;
		}
	}

	cout << result;

	return 0;
}
