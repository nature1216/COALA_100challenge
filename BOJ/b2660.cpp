#include<bits/stdc++.h>

using namespace std;
vector<int> v[54];
bool visited[54];
int depth[54];
int score[54];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		for(int i=0;i<v[x].size();i++) {
			int y = v[x][i];
			if(!visited[y]) {
				q.push(y);
				depth[y] = depth[x] + 1;
				visited[y] = true;
			}
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int p1, p2;

	while(1) {
		cin >> p1 >> p2;
		if(p1 == -1 && p2 == -1) break;
		v[p1].push_back(p2);
		v[p2].push_back(p1);
	}

	for(int i=1;i<=n;i++) {
		memset(visited, false, 54 * sizeof(bool));
		memset(depth, 0, 54 * sizeof(int));
		bfs(i);
		int maxd = 0;
		for(int j=1;j<=n;j++) {
			maxd = max(maxd, depth[j]);
		}
		score[i] = maxd;
	}

	int minScore = score[1];

	for(int i=2;i<=n;i++) {
		minScore = min(minScore, score[i]);
	}
	cout << minScore << " ";

	vector<int> cand;
	int count = 0;

	for(int i=1;i<=n;i++) {
		if(score[i] == minScore) {
			count++;
			cand.push_back(i);
		}
	}
	cout << count << '\n';
	for(int i=0;i<cand.size();i++) {
		cout << cand[i] << " ";
	}

	return 0;
}