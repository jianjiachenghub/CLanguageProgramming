#include<stdio.h>
#include<string.h>
int main()
{
	char arr[10000];
	int a = 'a'-'A';
	while(scanf("%s",arr)!=EOF)
	{
		int n= strlen(arr),i;
		for(i=0;i<n;i++)
		{
			if(arr[i]>='A'&&arr[i]<='Z')
			{
				arr[i]=arr[i]+a; 
			}
			else if(arr[i]>='a'&&arr[i]<='z')
			{
				arr[i]=arr[i]-a; 
			}
			printf("%c",arr[i]);
		}
		printf("\n");
	}
	return 0;
}

