#include <bits/stdc++.h>

using namespace std;

int n,m;
int ancestorCount;
vector<string> ancestor;

map<string, vector<string>> names;
map<string, int> indegree;
map<string, vector<string> > result;

void topologicalSort() {
	queue<string> q;

	for(auto iter = names.begin();iter != names.end();iter++) {
		if(indegree[iter->first] == 0) {
			ancestor.push_back(iter->first);
			ancestorCount++;
			q.push(iter->first);
		}
	}

	while(!q.empty()) {
		string now = q.front();
		q.pop();

		vector<string> children;

		for(int i=0;i<names[now].size();i++) {
			indegree[names[now][i]]--;
			if(indegree[names[now][i]] == 0) {
				q.push(names[now][i]);
				children.push_back(names[now][i]);
			}
		}
		result[now] = children;
	}

}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	for(int i=0;i<n;i++) {
		string name;
		cin >> name;

		vector<string> tmp;

		names[name] = tmp;
	}

	cin >> m;

	for(int i=0;i<m;i++) {
		string x, y;
		cin >> x >> y;
		names[y].push_back(x);
		indegree[x]++;
	}

	topologicalSort();

	cout << ancestorCount << '\n';

	for(int i=0;i<ancestor.size();i++) {
		cout << ancestor[i] << ' ';
	}

	cout << '\n';

	for(auto iter = result.begin();iter!=result.end();iter++) {
		vector<string> children = iter->second;
		cout << iter->first <<  ' ' << children.size() << ' ';
		sort(children.begin(), children.end());
		for(int i=0;i<children.size();i++) {
			cout << children[i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}
