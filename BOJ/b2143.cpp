#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t, n, m;

	cin >> t >> n;

	vector<int> a;
	vector<int> b;

	vector<int> a_sum;
	vector<int> b_sum;

	for(int i=0;i<n;i++) {
		int a1;
		cin >> a1;
		a.push_back(a1);
	}

	for(int i=0;i<n;i++) {
		long sum = a[i];
		a_sum.push_back(sum);
		for(int j=i+1;j<n;j++) {
			sum += a[j];
			a_sum.push_back(sum);
		}
	}

	cin >> m;

	for(int i=0;i<m;i++) {
		int b1;
		cin >> b1;
		b.push_back(b1);
	}

	for(int i=0;i<m;i++) {
		long sum = b[i];
		b_sum.push_back(sum);
		for(int j=i+1;j<m;j++) {
			sum += b[j];
			b_sum.push_back(sum);
		}
	}

	sort(a_sum.begin(), a_sum.end());

	sort(b_sum.begin(), b_sum.end());
	reverse(b_sum.begin(), b_sum.end());

	int ap = 0, bp = 0;
	long result = 0;

	while(1) {
		long a_cur = a_sum[ap];
		long b_cur = b_sum[bp];
		long target = t - a_cur;

		if(target == b_cur) {
			long a_cnt = 0;
			long b_cnt = 0;

			while(ap < a_sum.size() && a_cur == a_sum[ap]) {
				a_cnt++;
				ap++;
			}

			while(bp < b_sum.size() && b_cur == b_sum[bp]) {
				b_cnt++;
				bp++;
			}

			result += a_cnt * b_cnt;
		} else if(b_cur > target) {
			bp++;
		} else {
			ap++;
		}

		if(ap == a_sum.size() || bp == b_sum.size()) break;
	}

	cout << result;

	return 0;
}
