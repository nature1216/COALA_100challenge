#include<bits/stdc++.h>

using namespace std;

struct Node {
	map<string, Node*> child;

	void addNode(vector<string> v, int idx) { // 문자열 벡터의 idx번째 단어 add
		if(idx == v.size()) return;

		auto iter = child.find(v[idx]);

		if(iter != child.end()) { // 현재 노드의 child map에 add하려는 단어가 있으면
			iter->second->addNode(v, idx+1); // 다음 단어로 pass
		} else { // 없으면
			Node* n = new Node;
			child.insert({v[idx], n}); // 같은 level에 새로운 노드를 만들고
			n -> addNode(v, idx+1); // 새로운 노드의 child에 add
		}
	}

	void print(int idx) { // idx level 출력
		if(child.empty()) return;
		for(auto iter = child.begin(); iter != child.end(); iter++) {
			for(int i=0;i<idx;i++) {
				cout << ' ';
			}
			cout << iter -> first << '\n';
			iter -> second -> print(idx+1);
		}
	}
};

vector<string> split(string s, char sep) {
	vector<string> ans;
	stringstream ss(s);
	string tmp;

	while(getline(ss, tmp, sep)) {
		ans.push_back(tmp);
	}
	return ans;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n;

	Node* root = new Node;

	for(int i=0;i<n;i++) {
		string path;
		cin >> path;

		vector<string> v = split(path, '\\');
		root -> addNode(v, 0);
	}

	root -> print(0);

	return 0;
}
