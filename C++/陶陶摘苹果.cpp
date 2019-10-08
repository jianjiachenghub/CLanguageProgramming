#include<stdio.h>
int main()
{
	int arr[10],hight,sum=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",arr+i); 
	}
	scanf("%d",&hight);
	for(int i=0;i<10;i++)
	{
		if(30+hight>=arr[i])
			sum++;
	}
	printf("%d\n",sum);
}
