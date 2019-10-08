#include<stdio.h>
int main()
{
	int n,r;
	int C(int n ,int r);
	while(scanf("%d %d",&n,&r)&&(n||r))
	{
		if(n<r)
		{
			printf("error!\n");
			continue;
		}
		else
		{
			printf("%d\n",C(n,r)); 
		}
	}
	return 0;
}
int C(int n ,int r)
{
	if(r == 0)
	{
		return 1;
	}
	else
	{
		return C(n, r-1) * (n - r + 1) / r ;
	}
	
}
