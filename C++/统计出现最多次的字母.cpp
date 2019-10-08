#include<stdio.h>
int main()
{
	int ch[26]={0},n,max=0;
	char cs;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%c",&cs);
		ch[cs-'a']++;
	}
	for(int i=1;i<n;i++)
	{
		if(ch[i]>ch[max])
		{
			max=i;
		}
	}
	printf("%c\n",max+'a');
	return 0;
}
