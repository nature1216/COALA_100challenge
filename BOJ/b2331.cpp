#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

bool visited[1000000];

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, p;
	cin >> a >> p;

	int sum = a;
	int tmp = 0;

	visited[a] = true;
	int total = 1;

	while(1) {
		do {
			tmp += pow(sum%10, p);
			sum /= 10;
		} while(sum != 0);

		if(visited[tmp]) break;
		else visited[tmp] = true;

		sum = tmp;
		tmp = 0;
		total++;
	}


	// cout << tmp;

	int x = tmp;
	int cycle = 0;

	while(1) {
		int b = 0;
		do {
			b += pow(x%10, p);
			x /= 10;
		} while(x != 0);

		if(!visited[b]) break;
		else visited[b] = false;

		x = b;
		cycle++;
	}

	cout << total - cycle;

	return 0;
}