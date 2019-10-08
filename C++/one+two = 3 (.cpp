#include<stdio.h>
#include<string.h>
int change(char s[20])
{
	if(strcmp("one",s)==0) return 1;
	if(strcmp("two",s)==0) return 2;
	if(strcmp("three",s)==0) return 3;
	if(strcmp("four",s)==0) return 4;
	if(strcmp("five",s)==0) return 5;
	if(strcmp("six",s)==0) return 6;
	if(strcmp("seven",s)==0) return 7;
	if(strcmp("eight",s)==0) return 8;
	if(strcmp("nine",s)==0) return 9;
	if(strcmp("zero",s)==0) return 0;
}
int main()
{
	int a,b,sum;
	char s[20];
	while(scanf("%s",s)!=EOF)
	{ 
		a=change(s);
		scanf("%s",s);
		if(strcmp(s,"+")!=0)
		{
			a=a*10+change(s);
			scanf("%s",s);
		}
		scanf("%s",s);
		b=change(s);
		scanf("%s",s);
		if(strcmp(s,"=")!=0)
		{
			b=b*10+change(s);
			scanf("%s",s);
		}
		sum=a+b;
		if(a==0&&b==0)break; 
		printf("%d\n",sum);
	} 
}
