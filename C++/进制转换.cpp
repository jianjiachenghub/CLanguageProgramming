#include<stdio.h>
int main ()
{
	int fun(int n,int z);
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
		{
			printf("0\n0\n");
		}
		else
		{
			fun(n,2);
			printf("\n");
			fun(n,8);
			printf("\n");
		}
		
	}
	
}
int fun(int n,int z)
{
	int a=n,b,data[100],i=0;
	while(a>0)
	{
		b=a%z;
		a=a/z;
		data[i]=b;
		i++;
		
	}
	for(int k=i-1;k>=0;k--)
	{
		printf("%d",data[k]);
	}
}
