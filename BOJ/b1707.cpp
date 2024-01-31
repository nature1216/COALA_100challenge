#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

vector<int> graph[20004];
int group[20004];
bool flag;

void bfs(int start, int groupNum) {
	queue<int> q;
	q.push(start);
	group[start] = groupNum;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for(int i=0;i<graph[x].size();i++) {
			int y = graph[x][i];
			if(group[y] == 0) {
				q.push(y);
				group[y] = group[x] * -1;
			} else if(group[x] + group[y] != 0) {
				flag = false;
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;
	for(int i=0;i<k;i++) {
		int v, e;
		cin >> v >> e;
		for(int j=0;j<e;j++) {
			int v1, v2;
			cin >> v1 >> v2;
			graph[v1].push_back(v2);
			graph[v2].push_back(v1);
		}
		flag = true;

		for(int i=1;i<=v;i++) {
			if(!flag) break;
			if(group[i] == 0) bfs(i,1);
		}

		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;

		for(int j=1;j<=v;j++) graph[j].clear();
		fill_n(group, 20004, 0);
		
	}

	return 0;
}