#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10000];
	while(scanf("%s",arr)!=EOF)
	{
		int n= strlen(arr),i;//forѭ����i����ֱ����n-1 
		for(i=n-1;i>=0;i--)
		{
			printf("%c",arr[i]);
		}
		printf("\n");
	}
	return 0;
}

