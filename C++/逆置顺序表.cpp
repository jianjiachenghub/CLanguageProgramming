#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	char arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%c",&arr[i]);
		getchar();
	}
	
	for(int i=n-1;i>=0;i--)
	{
	printf("%c ",arr[i]);
		
	}

	
}
