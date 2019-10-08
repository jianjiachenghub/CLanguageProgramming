#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=2;i<=a;i++)
	{
		while(i!=a)
		{
		if(a%i==0)
		{
		printf("%d*",i);
		a=a/i;
		}
		else{break;}
		}
	}
	printf("%d",a);
	return 0;
}
