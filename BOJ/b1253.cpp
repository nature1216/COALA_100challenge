#include <bits/stdc++.h>

using namespace std;


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	vector<int> num;

	cin >> n;

	for(int i=0;i<n;i++) {
		int a;
		cin >> a;
		num.push_back(a);
	}

	sort(num.begin(), num.end());

	int cnt = 0;

	for(int i=0;i<n;i++) {
		int start = 0, end = n-1;
		while(start < end) {
			if(num[start] + num[end] == num[i]) {
				if(start != i && end != i) {
					cnt++;
					break;
				}
				else if(start == i) start++;
				else if(end == i) end--;
			}
			else if(num[start] + num[end] < num[i]) {
				start++;
			}
			else {
				end--;
			}
		}
	}

	cout << cnt;

	return 0;
}