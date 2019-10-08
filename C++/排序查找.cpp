#include<stdio.h>
int main()
{
	int sort(int arr[],int n);
	int n,student;
	scanf("%d",&n);
	int grades[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&grades[i]);
	}
	scanf("%d",&student);
	sort(grades,n);
	for(int i=0;i<n;i++)
	{
		if((i+1)%10==0)
		printf("%d\n",grades[i]);
		else if((i!=n-1))
		printf("%d ",grades[i]);
		else
		printf("%d\n",grades[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(grades[i]==student)
		{
			printf("%d\n",i+1);return 0;
		}
	}
	printf("no this score!\n");
	return 0;
	
} 
void sort(int arr[],int n)
{
	int change;
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n-k-1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				change = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = change;
			}
		}
	} 
}
