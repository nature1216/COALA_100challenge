#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

char arr[10][10];
int len[10];
int alpha[26];

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	scanf("%d", &n);

	for(int i=0;i<n;i++) {
		int idx = 0;
		scanf("%s", arr[i]);
		len[i] = strlen(arr[i]);
	}


	for(int i=0;i<n;i++) {
		int base = 1;
		for(int j=len[i]-1;j>=0;j--) {
			alpha[arr[i][j] - 'A'] += base;
			base *= 10;
		}
	}

	sort(alpha, alpha+26, cmp);

	int result = 0;

	for(int i=0;i<10;i++) {
		result += alpha[i] * (9-i);
	}

	cout << result;

	return 0;
}
