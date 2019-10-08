#include<stdio.h>
#include <string.h>
struct str
{
	char s[20];
	char num[10000];
	int l;
}arr[1005];
int main()
{
	struct str temp;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",arr[i].s);
		scanf("%s",arr[i].num);
		arr[i].l=strlen(arr[i].num);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int k=0;k<n-i-1;k++)
		{
			if(arr[k].l<arr[k+1].l)
			{
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
			}
			else if(arr[k].l==arr[k+1].l)
			{
				if(strcmp(arr[k].num,arr[k+1].num)<0)
				{
					temp=arr[k];
					arr[k]=arr[k+1];
					arr[k+1]=temp;
				}
				else if(strcmp(arr[k].num,arr[k+1].num)==0)
				{
					if(strcmp(arr[k].s,arr[k+1].s)>0)
					{
						temp=arr[k];
						arr[k]=arr[k+1];
						arr[k+1]=temp;
					}
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s\n",arr[i].s);
	}
	
}
