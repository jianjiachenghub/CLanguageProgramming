#include<stdio.h>
#include<string.h>
int main()
{
	char arr[200];
	while(scanf("%s",arr)!=EOF)
	{	
		char number[200]="";
		char letter[200]="";
		char other[200]="";
		//数组最好给初值 
		int a=0,b=0,c=0;
		int n= strlen(arr),i;
		for(i=0;i<n;i++)
		{
			if(arr[i]>='A'&&arr[i]<='Z'||arr[i]>='a'&&arr[i]<='z')
			{
				letter[a]=arr[i]; 
				a++;
			}
			else if(arr[i]>='0'&&arr[i]<='9')
			{
				number[b]=arr[i];
				b++;
			}
			else
			{
				other[c]=arr[i];
				c++;
			}
		}
		
		int let = strlen(letter);
		if(a!=0)
		{
			for(i=0;i<let;i++)
			{
				printf("%c",letter[i]);
			}
			printf("\n");
		}
		if(b!=0)
		{
			int num = strlen(number);
			for(i=0;i<num;i++)
			{
				printf("%c",number[i]);
			}
			printf("\n");
		}
		if(c!=0)
		{
			int oth = strlen(other);
			for(i=0;i<oth;i++)
			{
				printf("%c",other[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
