#include <bits/stdc++.h>
#define MAX 100004

using namespace std;

vector<int> connect[MAX];
int parents[MAX];
vector<int> childs[MAX];
int nodeCount[MAX];

void makeTree(int currentNode, int parent) {
	for(int i=0;i<connect[currentNode].size();i++) {
		int node = connect[currentNode][i];
		if(node != parent) {
			childs[currentNode].push_back(node);
			parents[node] = currentNode;
			makeTree(node, currentNode);
		}
	}
}

void countSubtreeNodes(int currentNode) {
	nodeCount[currentNode] = 1;
	for(int i=0;i<childs[currentNode].size();i++) {
		int node = childs[currentNode][i];
		countSubtreeNodes(node);
		nodeCount[currentNode] += nodeCount[node];
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, r, q;
	cin >> n >> r >> q;

	for(int i=0;i<n-1;i++) {
		int u, v;

		cin >> u >> v;
		connect[u].push_back(v);
		connect[v].push_back(u);
	}

	makeTree(r, -1);
	countSubtreeNodes(r);

	for(int i=0;i<q;i++) {
		int u;
		cin >> u;

		cout << nodeCount[u] << '\n';
	}
  
	return 0;
}
