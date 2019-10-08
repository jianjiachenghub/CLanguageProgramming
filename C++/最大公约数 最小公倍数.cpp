#include<stdio.h>
int main()
{
	int a,b,c,d,e,temp;
	printf("«Î ‰»Î\n") ;
	scanf("%d%d",&a,&b);
	d=a;
	e=b;
	if(a<b){c=a;a=b;b=c;}
	while(temp=a%b)
	{
		a=b;
		b=temp;
	}
	printf("%d",b);
	printf("\n%d",d*e/b);
	return 0;
}
