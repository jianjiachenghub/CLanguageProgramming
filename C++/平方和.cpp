#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int fun(int n);
	printf("%d\n",fun(n));
}
int fun(int n)
{
	if(n==1)
	{
		return n*n;
	}
	else
	{
		return n*n+fun(n-1);
	}
}
