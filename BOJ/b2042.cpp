#include <bits/stdc++.h>

using namespace std;

long long nums[1000004];
long long graph[4000008];

long long query(int left, int right, int node, int start, int end) {
	if(left > end || right < start) return 0; // 범위에 x
	else if(left >= start && right <= end) { // 범위에 들어갈때
		return graph[node];
	} else { // 겹칠때
		int mid = (left+right) / 2;
		long long leftTree = query(left, mid, node*2 , start, end);
		long long rightTree = query(mid+1, right, node*2+1, start, end);
		return leftTree + rightTree;
	}
}

void update(int left, int right, int node, int target, long long diff) {
	if(left <= target && right >= target) {
		graph[node] += diff;
		if(left != right) {
			int mid = (left + right) / 2;
			update(left, mid, node*2, target, diff);
			update(mid+1, right, node*2+1, target, diff);
		}
	} 
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n, m, k;
	cin >> n >> m >> k;

	for(int i=0;i<n;i++) {
		long long x;
		cin >> x;
		nums[i] = x;
	}

	int p = 0;
	while(pow(2, p) < n) {
		p++;
	}
	int s = pow(2, p);


	for(long long i=0;i<n;i++) {
		graph[i+s] = nums[i];
	}

	for(long long i=s-1;i>0;i--) {
		graph[i] = graph[i*2] + graph[i*2+1];
	}

	for(long long i=0;i<m+k;i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		if(a == 1) {
			long long diff = c - query(1, s, 1, b, b);
			update(1, s, 1, b, diff);
		} else if (a == 2) {
			cout << query(1, s, 1, b, c) << '\n';
		}
	}
	

	return 0;
}