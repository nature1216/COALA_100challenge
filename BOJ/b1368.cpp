#include <bits/stdc++.h>

using namespace std;

int n;
int diggingCost[304];
int parent[304];
vector<pair<int, pair<int, int>>> edges;

int findParent(int x) {
	if(x == parent[x]) return x;
	return findParent(parent[x]);
}

void unionParent(int a, int b) {
	a = findParent(a);
	b = findParent(b);

	if(a < b) parent[b] = a;
	else parent[a] = b;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int result = 0;

	cin >> n;

	for(int i=1;i<=n;i++) {
		parent[i] = i;
	}

	for(int i=1;i<=n;i++) {
		int w;
		cin >> w;
		diggingCost[i] = w;
	}

	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			int cost;
			cin >> cost;
			edges.push_back({cost, {i,j}});
		}
		edges.push_back({diggingCost[i], {i,0}});
		edges.push_back({diggingCost[i], {0,i}});
	}

	sort(edges.begin(), edges.end());

	for(int i=0;i<edges.size();i++) {
		int cost = edges[i].first;
		int a = edges[i].second.first;
		int b = edges[i].second.second;

		if(findParent(a) != findParent(b)) {
			unionParent(a, b);
			result += cost;
		}
	}

	cout << result << '\n';

	return 0;
}