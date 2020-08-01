#include<stdio.h>
char name[14];
int main()

{
	int n;
	scanf("%d",&n);
	int i,score;
	for(i=0;i<n;i++)
	{
		scanf("%s %d",name,&score);
		if(97<=score)
		{
			printf("%s A+\n",name);
		}
		else if(90<=score)
		{
			printf("%s A\n",name);
		}
		else if(87<=score)
		{
			printf("%s B+\n",name);
		}
		else if(80<=score)
		{
			printf("%s B\n",name);
		}
		else if(77<=score)
		{
			printf("%s C+\n",name);
		}
		else if(70<=score)
		{
			printf("%s C\n",name);
		}
		else if(67<=score)
		{
			printf("%s D+\n",name);
		}
		else if(60<=score)
		{
			printf("%s D\n",name);
		}
		else
		{
			printf("%s F\n",name);
		}
	}
	
	return 0;
 } 
