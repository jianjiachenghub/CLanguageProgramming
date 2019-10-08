#include<stdio.h>
#include<string.h>
int main()
{
	char firstUniqChar(char* s);
	char s[]="abaccc";
	firstUniqChar(s);
	
}
char firstUniqChar(char* s) {
    int len;int flag,j;
    j=0;
    len=strlen(s);
	for(j;j<len-1;j++) 
	{
		int i;
		flag=2; 
		for(i=j+1;i<len;i++)
		{
			if(s[j]==s[i])
			{
			flag=4;
		}
		if(flag==2)
		{
		printf("%daaa",j);return 0;}	
	}	
}

}
