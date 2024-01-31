#include <bits/stdc++.h>

using namespace std;

char st[100] = {};

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	vector<char> ch;

	cin >> st;

	string str = st;
	stringstream iss(str);

	string buf, buf2;
	while(getline(iss,buf, '-')) {
		int sum = 0;
		stringstream iss2(buf);
		while(getline(iss2, buf2, '+')) {
			sum += atoi(buf);
			cout << sum;
		}
		v.push_back(sum);
	}

	for(int i=0;i<str.length();i++){
		cout << v[i] << '\n';
	}



	return 0;
}