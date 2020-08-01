#include<stdio.h>
#include<math.h>

int main()

{
	int n,i;
	int a,b,c,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		b=a/10;
		c=a%10;
		ans+=pow(b,c);
	}
	printf("%d",ans);
	
	
	return 0;
}
