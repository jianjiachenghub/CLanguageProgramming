#include<stdio.h>
#include<string.h>
int main()
{
	int size;
	int n;
	int num;
	int i=0,count=0,head=0;
	char in[10];
	scanf("%d",&size);
	scanf("%d",&n);
	getchar();
	int arr[n];
	while(n--)
	{
		scanf("%s",in);
		if(strcmp(in,"in") == 0)
		{
			scanf("%d",&num);
			if(count==size-1) continue;
			arr[i]=num;
			i =i+1;
			count++;
		}
		if(strcmp(in,"out") == 0)
		{
			count--;
			head++;
		}
	}
	for(int i=head;i<head+count;i++)
	{
		printf("%d ",arr[i]);
	}
}
