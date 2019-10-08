#include<stdio.h>
int main()
{
	int n,u,d;
	while(scanf("%d %d %d",&n,&u,&d)!=EOF)
	{
		if(n==0&&u==0&&d==0)return 0;
		int sum=0,i=0;
		while(1)
		{
			i++;
			sum += u;
			if(sum>=n)
			{
				printf("%d\n",i);
				break;
			}
			i++;
			sum-=d;
		}
		
	}
}
