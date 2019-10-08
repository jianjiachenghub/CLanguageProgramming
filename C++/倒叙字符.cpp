#include<stdio.h>
#include<string.h>
int main()
{
	void exchange(char* arry);
	char arry[100];
	scanf("%s",arry); 
	exchange(arry);
}	
void exchange(char* arry)
{
	int len,i;
	len=strlen(arry);
	for(i=len;i>=0;i--)
	{
		printf("%c",arry[i]);
	}
}
