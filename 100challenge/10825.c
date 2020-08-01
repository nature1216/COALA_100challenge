#include<stdio.h>
#include<string.h>

struct Student {
	int korean;
	int math;
	int english;
	char name[19];
};


int main()
{
	int n;
	scanf("%d",&n);
	
	struct Student s[100009];
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %d",&s[i].name,&s[i].korean,&s[i].math,&s[i].english);
	}
	
	char tmp_n[19] = { '\n' };
	int tmp_k;
	int tmp_m;
	int tmp_e;
	
	int j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].korean<s[j+1].korean)
			{
				tmp_k=s[j].korean;
				s[j].korean=s[j+1].korean;
				s[j+1].korean=tmp_k;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].korean==s[j+1].korean)
			{
				if(s[j].math<s[j+1].math)
				tmp_m=s[j].math;
				s[j].math=s[j+1].math;
				s[j+1].math=tmp_m;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].math==s[j+1].math)
			{
				if(s[j].english==s[j+1].english)
				{
					tmp_e=s[j].english;
					s[j].english=s[j+1].english;
					s[j+1].english=tmp_e;
				}

			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].english==s[j+1].english)
			{
				strcpy(tmp_n,s[j].name);
				strcpy(s[j].name,s[j+1].name);
				strcpy(s[j+1].name,tmp_n);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s",s[i].name);
	}
	
	
	return 0;
}
