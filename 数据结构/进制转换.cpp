#include<stdio.h>
int main()
{
	int n;
	int r;
	int arr[100];
	int i=0;
	scanf("%d",&n);
	getchar();
	while(n>0)
	{
		r=n%2; 
		n=n/2;
		arr[i]=r;
		i++;
	}
	for(int a=i-1;a>=0;a--)
	{
		printf("%d",arr[a]);
	}
}
