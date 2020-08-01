#include<stdio.h>

int ans[109],ans_m[109];
int main()
{
	int sam,sys;
	int samcase=1,syscase=1;
	scanf("%d %d",&sam,&sys);
	int i;
	for(i=0;i<sam;i++)
	{
		scanf("%d %d",&ans[i],&ans_m[i]);
	}
	for(i=0;i<sam;i++)
	{
		if(ans[i]!=ans_m[i])
		{
			samcase=0;
			break;
		}
	}
	for(i=0;i<sys;i++)
	{
		scanf("%d %d",&ans[i],&ans_m[i]);
	}
	for(i=0;i<sys;i++)
	{
		if(ans[i]!=ans_m[i])
		{
			syscase=0;
			break;
		}
	}
	if(samcase==1 && syscase==1)
	{
		printf("Accepted");
	}
	else if(samcase==0)
	{
		printf("Wrong Answer");
	}
	else if(syscase==0)
	{
		printf("Why Wrong!!!");
	}
	
	
	
	return 0;
}
