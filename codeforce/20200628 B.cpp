#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int t, Alice = 0, Bob = 0;
	scanf_s("%d", &t);
	for (int i = 0; i < t; i++)
	{/*
		vector<string> bin;
		string a;
		cin >> a;
		bin.push_back(a);
		int size = bin.size();
		printf("size : %d", size);
	*/	
		int bin[109] = { 0 };
		for(int k=0)
		int com = 0, rem = 0;
		int size = sizeof(bin) / sizeof(int);
		
		for (int j = 0; j < size-1; j++)
		{

			if (bin[j] != bin[j+1])
			{
				if (j != 0 && j + 2 != size - 2 && bin[j - 1] == bin[j + 2])
				{
					bin[j] = -1;
					bin[j + 1] = -1;
					com = 1;
					break;
				}
				else if (j = size - 2)
				{
					bin[rem] = -1;
					bin[rem + 1] = -1;
				}
				else
					rem = j;
			}
			else
			{
				printf("s[%d] s[%d] °°´Ù", j, j + 1);
			}
			if (j % 2 == 0)
				Alice++;
			else
				Bob++;
			cout << bin;
		}
		printf("Alice : %d, Bob : %d", Alice, Bob);
	}

	return 0;
}