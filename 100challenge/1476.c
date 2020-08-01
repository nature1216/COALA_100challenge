#include<stdio.h>

int main()
{
	int e,s,m;
	scanf("%d %d %d",&e,&s,&m);
	int e_1=1,s_1=1,m_1=1,cnt=1;
	while(1)
	{
		if(e_1!=e || s_1!=s || m_1!=m)
		{
			e_1++;
			s_1++;
			m_1++;
			cnt++;
			if(e_1>15)
			{
				e_1=1;
			}
			if(s_1>28)
			{
				s_1=1;
			}
			if(m_1>19)
			{
				m_1=1;
			}
		}
		else
			break;
	}
	printf("%d", cnt);
	
	return 0;
}
