#include<stdio.h>
int main()
{
	int a,b;
	b=1;
	scanf("%d",&a);
	if(a<=12)
	{
	while(a)
	{
		b=b*a;
		a=a-1;
	}
	printf("%d",b);
	}
	return 0;
}
