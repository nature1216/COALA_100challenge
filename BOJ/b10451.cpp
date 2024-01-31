#include <bits/stdc++.h>
#define endl '\n';

using namespace std;

vector<int> graph[1004];
bool vistied[1004];

void dfs(int x) {
	vistied[x] = true;
	for(int i=0;i<graph[x].size();i++) {
		int y = graph[x][i];
		if(!vistied[y]) dfs(y);
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for(int i=0;i<t;i++) {
		int n;
		cin >> n;
		for(int j=1;j<=n;j++) {
			int x;
			cin >> x;
			graph[j].clear();
			vistied[j] = false;

			graph[j].push_back(x);
		}

		int cnt = 0;

		for(int j=1;j<=n;j++) {
			if(!vistied[j]) {
				dfs(j);
				cnt++;
			}
		}

		cout << cnt << endl;

	}

	return 0;
}