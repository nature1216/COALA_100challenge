#include <iostream>
#include <algorithm>

using namespace std;

int n,m, arr[8], res[8];
bool check[8];

void func(int cnt) {
	if(cnt == m) {
		for(int i=0;i<m;i++) {
			cout << res[i] << " ";
		}
		cout << '\n';
		return;
	}

	int x = 0;

	for(int i=0;i<n;i++) {
		if(!check[i] && arr[i] != x) {
			res[cnt] = arr[i];
			check[i] = true;
			x = res[cnt];
			func(cnt+1);
			check[i] = false;
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}

	sort(arr, arr+n);

	func(0);

	return 0;
}
