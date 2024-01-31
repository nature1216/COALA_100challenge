#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	if(p1.second == p2.second) {
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, median = 0;
	int arr[n];
	cin >> n;

	vector<pair<int, int>> v; // <값, 빈도수>
	vector<int> vc;

	for(int i=0;i<n;i++) {
		int m;
		cin >> m;
		vc.push_back(m);
		if(i == 0) {
			v.push_back(make_pair(m, 1));
		} else {
			bool flag = true;
			for(int j=0;j<v.size();j++) {
				if(m == v[j].first) {
					v[j].second++;
					flag = false;
					break;
				}
			}
			if(flag) {
				v.push_back(make_pair(m, 1));
			}
		}
	}

	sort(v.begin(), v.end(), cmp);
	sort(vc.begin(), vc.end());

	double total = 0, mean = 0;
	for(int i=0;i<v.size();i++) {
		total += v[i].first * v[i].second;
	}

	mean = total / n;
	mean = round(mean);

	int freq = (v[0].second == v[1].second) ? v[1].first : v[0].first;

	cout << (int)mean << endl; // mean
	cout << vc[n/2] << endl; // median
	cout << freq << endl; // 최빈값
	cout << abs(vc[n-1] - vc[0]) << endl;


	return 0;
}