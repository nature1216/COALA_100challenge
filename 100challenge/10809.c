#include<stdio.h>
#include<string.h>

int num[29];
char c[109];
int main()

{
	int i; 
	scanf("%s",c);
	for(i=0;i<29;i++)
	{
		num[i]=-1;
	}
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]=='a' && num[1]==-1)
		{
			num[1]=i;
		}
		if(c[i]=='b' && num[2]==-1)
		{
			num[2]=i;
		}
		if(c[i]=='c' && num[3]==-1)
		{
			num[3]=i;
		}
		if(c[i]=='d' && num[4]==-1)
		{
			num[4]=i;
		}
		if(c[i]=='e' && num[5]==-1)
		{
			num[5]=i;
		}
		if(c[i]=='f' && num[6]==-1)
		{
			num[6]=i;
		}
		if(c[i]=='g' && num[7]==-1)
		{
			num[7]=i;
		}
		if(c[i]=='h' && num[8]==-1)
		{
			num[8]=i;
		}
		if(c[i]=='i' && num[9]==-1)
		{
			num[9]=i;
		}
		if(c[i]=='j' && num[10]==-1)
		{
			num[10]=i;
		}
		if(c[i]=='k' && num[11]==-1)
		{
			num[11]=i;
		}
		if(c[i]=='l' && num[12]==-1)
		{
			num[12]=i;
		}
		if(c[i]=='m' && num[13]==-1)
		{
			num[13]=i;
		}
		if(c[i]=='n' && num[14]==-1)
		{
			num[14]=i;
		}
		if(c[i]=='o' && num[15]==-1)
		{
			num[15]=i;
		}
		if(c[i]=='p' && num[16]==-1)
		{
			num[16]=i;
		}
		if(c[i]=='q' && num[17]==-1)
		{
			num[17]=i;
		}
		if(c[i]=='r' && num[18]==-1)
		{
			num[18]=i;
		}
		if(c[i]=='s' && num[19]==-1)
		{
			num[19]=i;
		}
		if(c[i]=='t' && num[20]==-1)
		{
			num[20]=i;
		}
		if(c[i]=='u' && num[21]==-1)
		{
			num[21]=i;
		}
		if(c[i]=='v' && num[22]==-1)
		{
			num[22]=i;
		}
		if(c[i]=='w' && num[23]==-1)
		{
			num[23]=i;
		}
		if(c[i]=='x' && num[24]==-1)
		{
			num[24]=i;
		}
		if(c[i]=='y' && num[25]==-1)
		{
			num[25]=i;
		}
		if(c[i]=='z' && num[26]==-1)
		{
			num[26]=i;
		}
	}
	for(i=1;i<27;i++)
	{
		printf("%d ",num[i]);
	}
	
	return 0;
}
