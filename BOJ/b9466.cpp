#include <bits/stdc++.h>

using namespace std;

int graph[100004];
bool visitied[100004];
bool done[100004];
int cnt, n;

void dfs(int x) {
	visitied[x] = true;

	int y = graph[x];
	if(!visitied[y]) dfs(y);
	else if(visitied[y] && !done[y]) { // cycle
		cnt++;
		for(int i=y;i!=x;i=graph[i]) {
			cnt++;
		}
	}

	done[x] = true;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for(int i=0;i<t;i++) {
		cin >> n;
		cnt = 0;
		memset(visitied, false, sizeof(visitied));
		memset(done, false, sizeof(done));

		for(int j=1;j<=n;j++) {
			cin >> graph[j];
		}

		for(int j=1;j<=n;j++) {
			if(!visitied[j]) dfs(j);
		}

		cout << n - cnt;
	}

	return 0;
}