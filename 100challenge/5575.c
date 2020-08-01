#include<stdio.h>

int main()
{
	int h_i,m_i,s_i,h_o,m_o,s_o;
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d %d %d %d %d %d",&h_i,&m_i,&s_i,&h_o,&m_o,&s_o);
		int sum_i,sum_o,sum_f;
		sum_i=h_i*3600+m_i*60+s_i;
		sum_o=h_o*3600+m_o*60+s_o;
		printf("%d %d %d",(sum_o-sum_i)/3600,((sum_o-sum_i)%3600)/60,(sum_o-sum_i)%60);
		printf("\n"); 
	}
	
	
	
	
	return 0;
 } 
