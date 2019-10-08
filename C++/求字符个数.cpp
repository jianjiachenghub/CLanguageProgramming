#include<stdio.h>
int main()
{
	char a;
	int i,j,d;
	i=0; j=0; d=0;
	while((a=getchar())!='\n')
	{
		if(a>='a'&&a<='z')i++;
		else if(a==' ')j++;
		else if(a>='0'&&a<='9')d++;
	}
	printf("%d %d %d",i,j,d); 
	return 0;
 } 
