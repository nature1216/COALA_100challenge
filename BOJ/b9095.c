#include <stdio.h>

int d[14];

int main() {

	int t;
	scanf("%d",&t);
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;

	int i;
	for(i=4;i<=11;i++) {
		d[i] = d[i-1] + d[i-2] + d[i-3];
	}

	for(i=0;i<t;i++) {
		int n;
		scanf("%d",&n);
		printf("%d\n",d[n]);
	}

	return 0;
}