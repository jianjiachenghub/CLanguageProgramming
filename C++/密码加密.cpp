#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int len,i;
	while(~scanf("%s",&s))
	{
	len=strlen(s);
	for(i=0;i<len;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32; 
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	printf("%c",s[i]);
	}
	}
	return 0;
}
