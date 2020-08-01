#include<stdio.h>
#include<math.h>

int main()
{
	int n,w,h;
	scanf("%d %d %d",&n,&w,&h);
	int i;
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		int cross;
		cross=sqrt(pow(w,2)+pow(h,2));
		if(cross>=a)
		{
			printf("DA\n");
		}
		else
		{
			printf("NE\n");
		}
	}
	
	
	return 0;
}
