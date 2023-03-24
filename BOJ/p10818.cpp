#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, num;

	cin >> n;

	vector<int> v;

	for(int i=0;i<n;i++) {
		cin >> num;
		v.push_back(num); 
	}

	sort(v.begin(), v.end());

	cout << v.front() << " " << v.back();

	return 0;
}