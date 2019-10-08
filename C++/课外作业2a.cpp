#include<stdio.h>
#include<string.h>
int main()
{
	int sum=1;
	sum = 0;
	char arr[1000];
	gets(arr);
	int n = strlen(arr);
	for(int i=0;i<n;i++)
	{
		if(' '==arr[i]){
			sum++;
		}
	}
	printf("%d",sum);
	
}
