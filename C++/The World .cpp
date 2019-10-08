#include<stdio.h>
#include <string.h>
struct str
{
	char s[20];
	int num;
	int newnum;
	int cut;
}arr[1005];
int main()
{
	struct str temp;
	int n,count=0,index;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",arr[i].s);
	}
	for(int i=0;i<n;i++)
	{ 
		scanf("%d",&arr[i].num);
	}
	for(int i=0;i<n;i++)
	{ 
		scanf("%d",&arr[i].newnum);
		arr[i].cut=arr[i].newnum-arr[i].num;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int k=0;k<n-i-1;k++)
		{
			if(arr[k].cut!=0&&arr[k+1].cut!=0&&arr[k].cut<arr[k+1].cut)
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
			else if(arr[k].cut==arr[k+1].cut)
			{
				if(strcmp(arr[k].s,arr[k+1].s)>0)
				{
					temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
			}
			else if(arr[k].cut==0&&arr[k+1].cut!=0)
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		printf("%d %s\n",arr[i].cut,arr[i].s);
	}
	
}
