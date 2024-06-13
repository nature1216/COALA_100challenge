#include <bits/stdc++.h>

using namespace std;

int r, c, result;

void z(int length, int start, int cr, int cc) {
	if(length == 1 || (cr == r && cc == c)) {
		result = start;
		return;
	}

	int dlength = length/2;

	if(dlength+cr > r && dlength+cc > c) { // 2사분면
		z(dlength, start, cr, cc);
	} else if(dlength+cr <= r && dlength+cc > c) { // 3사분면
		z(dlength, start+dlength*dlength*2, cr+dlength, cc);
	} else if(dlength+cr > r && dlength+cc <= c) { // 1사분면
		z(dlength, start+dlength*dlength, cr, cc+dlength);
	} else { // 4사분면
		z(dlength, start+dlength*dlength*3, cr+dlength, cc+dlength);
	}
	return;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	cin >> n >> r >> c;

	z(pow(2,n), 0, 0, 0);

	cout << result;


	return 0;
}
