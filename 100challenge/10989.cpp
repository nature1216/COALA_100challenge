#include<iostream>

using namespace std;

int a[10001];

int main()
{
	int n,num,i,j;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &num);
		a[num]++;
	}
	for (i =1; i <= 10000; i++)
		for (j = 0; j < a[i]; j++)
			printf("%d ", i);
	printf("\n");

		
	return 0; 
}