#include <bits/stdc++.h>

using namespace std;

char graph[54][54];
bool visited[54][54];
int path[54][54];
int r, c;
// 동, 서, 남, 북
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void flood() {
	vector<pair<int, int>> vp;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			if(graph[i][j] == '*') {
				vp.push_back({i, j});
			}
		}
	}

	for(int i=0;i<vp.size();i++) {
		for(int j=0;j<4;j++) {
			int nx = vp[i].first + dx[j];
			int ny = vp[i].second + dy[j];

			if(graph[nx][ny] == '.') {
				graph[nx][ny] = '*';
			}
		}
	}
}

void bfs(int x, int y) {
	queue<pair<int, int>> q;
	q.push({x, y});

	int t = 0;
	flood();

	while(!q.empty()) {

		x = q.front().first;
		y = q.front().second;
		visited[x][y] = true;

		if(path[x][y] > t) {
			flood();
			t = path[x][y];
		}

		q.pop();


		for(int i=0;i<4;i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if(nx < 0 || nx >= r || ny < 0 || ny >= c) {
				continue;
			}
			if(graph[nx][ny] == 'X' || graph[nx][ny] == '*') {
				continue;
			}

			if((graph[nx][ny] == '.' || graph[nx][ny] == 'D') && !visited[nx][ny]) {
				path[nx][ny] = path[x][y] + 1;
				q.push({nx, ny});
				visited[nx][ny] = true;
			}
		}
	}
}


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y, fx, fy;

	cin >> r >> c;

	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) {
			cin >> graph[i][j];
			if(graph[i][j] == 'S') {
				x = i;
				y = j;
			}
			if(graph[i][j] == 'D') {
				fx = i;
				fy = j;
			}
		}
	}

	bfs(x, y);

	if(path[fx][fy] == 0) {
		cout << "KAKTUS";
	} else {
		cout << path[fx][fy] << '\n';
	}

	return 0;
}