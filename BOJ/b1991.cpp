#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

struct Node {
	char c;
	Node* left = NULL;
	Node* right = NULL;
};

void preorder(Node* node) { // (루트) (왼쪽 자식) (오른쪽 자식)
	cout << node -> c;
	if(node -> left != NULL) {
		preorder(node -> left);
	}
	if(node -> right != NULL) {
		preorder(node -> right);
	}
}

void inorder(Node* node) { // (왼쪽 자식) (루트) (오른쪽 자식)
	if(node -> left != NULL) {
		inorder(node -> left);
	}
	cout << node -> c;
	if(node -> right != NULL) {
		inorder(node -> right);
	}
}

void postorder(Node* node) { // (왼쪽 자식) (오른쪽 자식) (루트)
	if(node -> left != NULL) {
		postorder(node -> left);
	}
	if(node -> right != NULL) {
		postorder(node -> right);
	}
	cout << node -> c;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<Node> v(26);
	Node* root;

	for(int i=0;i<n;i++) {
		char parent, left, right;
		cin >> parent >> left >> right;

		v[parent - 'A'].c = parent;

		if(left != '.') {
			v[parent - 'A'].left = &v[left - 'A'];
		}
		if(right != '.') {
			v[parent - 'A'].right = &v[right - 'A'];
		}
	}

	root = &v[0];

	preorder(root);
	cout << '\n';
	inorder(root);
	cout << '\n';
	postorder(root);


	return 0;
}