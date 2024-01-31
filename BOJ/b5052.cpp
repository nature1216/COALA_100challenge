#include <bits/stdc++.h>

using namespace std;

struct TRIE
{
	bool finish;
	TRIE *Node[10];
	TRIE() {
		finish = false;
		for(int i=0;i<10;i++) Node[i] = NULL;
	}

void insert(char *str) {
	if(*str == NULL) {
		finish = true;
		return;
	}

	int cur = *str - '0';
	if(Node[cur] == NULL) {
		Node[cur] = new TRIE();
	}
	Node[cur]->insert(str + 1);
}

bool find(char *str) {
	if(*str == NULL) {
		if(finish == true) {
			for(int i=0;i<10;i++) {
				if(Node[i] != NULL) {
					return true;
				}
			}
			return false;
		}
		return false;
	}
	int cur = *str - '0';
	if(Node[cur] == NULL) return false;
	return Node[cur] -> find(str + 1);
}
};


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;

	for(int i=0;i<t;i++) {
		int n;
		cin >> n;

		TRIE *root = new TRIE();
		char *string[10004];

		for(int j=0;j<n;j++) {
			char tmp[14];
			cin >> tmp;
			int len = strlen(tmp) + 1;
			string[j] = (char *)malloc(sizeof(char) * len);

			strcpy(string[j], tmp);
		}

		for(int j=0;j<n;j++) {
			root -> insert(string[j]);
		}

		bool flag = true;

		for(int j=0;j<n;j++) {
			if(root -> find(string[j])) {
				flag = false;
				break;
			}
		}

		if(flag) {
			cout << "YES";
		} else {
			cout << "NO";
		}

		cout << endl;

		for(int j=0;j<n;j++) {
			free(string[j]);
		}
	}

	return 0;
}