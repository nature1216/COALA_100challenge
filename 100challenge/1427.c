#include <bits/stdc++.h>
#include<string.h>
using namespace std;

char arr[19];
int main()
{
	int i;
	scanf("%s",&arr);
	sort(arr,arr+n);
	reverse(arr,arr+n);
	for(i=0;i<strlen(arr);i++)
	{
		printf("%s",arr);
	}
	
	return 0;
}
