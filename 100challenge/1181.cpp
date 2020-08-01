#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

char* word[200009];


int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(strlen(word[j])>strlen(word[j+1]))
			{
				char* str;
				str=word[j];
				word[j]=word[j+1];
				word[j+1]=str;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",word[i]);
	}


	// strcmp CO“uo : 使o﹌cAU﹌?╳使A╳i “／n╳取使帚CI﹌﹠A CO“uo
	// ﹌Ｙ使╳ 使o﹌cAU﹌?╳使A╳i “／n╳取使帚CO ﹌O╳▼﹌﹠A ╳icAu﹌?﹌Ｙ 使帚“﹟﹌?A﹌﹠A “u使見“u╳使╳芋﹌Ｙ 使帚“﹟A使／AI ╳芋“﹟AI ﹌﹠o A╳i ╳芋“﹟AI﹌﹠U.

	// #include <cstring>
	// int strcmp(const char* str1, const char* str2);
	// int strncmp(cosnt char* str1, const char* str, size_t length);
	// @return 1. positive - str1AI str2“／﹌／﹌﹠U A╳i ╳芋使╳﹌?i
	//         2. negative - str2╳芋﹌Ｙ str1“／﹌／﹌﹠U A╳i ╳芋使╳﹌?i
	//         3. 0        - str1╳芋u str2╳芋﹌Ｙ ╳芋╳芋A“／ ╳芋使╳﹌?i

	//return strcmp(n1, n2) > 0 ? n1 : n2;



	return 0;
}


