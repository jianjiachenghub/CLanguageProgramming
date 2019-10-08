#include<stdio.h>
#include<string.h>
int main()
{
	int leftF=0;
	int leftY=0;
	char arr[10000];
	int flag=1;
	int isp=1;
	scanf("%s",arr);
	getchar();
	int n= strlen(arr);
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='[')
		{
			leftF++;
		}
		else if(arr[i]==']')
		{
			if(arr[i-1]!='['&&isp==1) 
			{
			printf("NO");
			flag=0;
			isp=0;
			break;
			}
			leftF--;
		}
		else if(arr[i]=='(')
		{
			leftY++;
		}
		else if(arr[i]==')')
		{
			if(arr[i-1]!='('&&isp==1) 
			{
			printf("NO");
			flag=0;
			isp=0;
			break;
			}
			leftY--;
		}
		else{
			printf("NO");
			flag=0;
			break;
		}
		if(leftF<0||leftY<0)
		{
			printf("NO");
			flag=0;
			break;
		}
	}
	if(leftF==0&&leftY==0&&flag==1)
	{
		printf("YES");
	}else if(flag==1){
		printf("NO");
	}
}
