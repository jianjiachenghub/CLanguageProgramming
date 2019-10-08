#include<stdio.h>
#include<string.h>
int main()
{
	char arr[1000];
	while(scanf("%s",arr)!=EOF)
	{
		int size = strlen(arr);
		for(int i=0;i<size;i++) 
		{
			if(arr[i]>='a'&&arr[i]<='y'||arr[i]>='A'&&arr[i]<='Y')
			{
				arr[i]++;
			}
			else if(arr[i]=='z'||arr[i]=='Z')
			{
				arr[i]-=25;
			}
		}
		printf("%s\r\n",arr);//循环输入时移动光标 
	}
	return 0;
}
