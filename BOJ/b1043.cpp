#include <bits/stdc++.h>

using namespace std;

vector<int> party[54];
bool cant_lie[54];
bool visited[54];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n >> m;

	int t;
	queue<int> q;

	cin >> t;

	for(int i=0;i<t;i++) {
		int x;
		cin >> x;
		q.push(x);
	}

	for(int i=0;i<m;i++) {
		int c;
		cin >> c;

		for(int j=0;j<c;j++) {
			int x;
			cin >> x;
			// i 파티에 x 참석
			party[i].push_back(x);
		}
	}

	while(!q.empty()) {
		int now = q.front();
		q.pop();

		visited[now] = true;

		for(int i=0;i<m;i++) {
			if(find(party[i].begin(), party[i].end(), now) != party[i].end()) {
				cant_lie[i+1] = true;
				for(int j=0;j<party[i].size();j++) {
					if(!visited[party[i][j]]) {
						q.push(party[i][j]);
					}
				}
			}

		}
	}

	int count = 0;

	for(int i=1;i<=m;i++) {
		if(!cant_lie[i]) count++;
	}

	if(t == 0) {
		cout << m;
	} else {
		cout << count;
	}

	return 0;
}
