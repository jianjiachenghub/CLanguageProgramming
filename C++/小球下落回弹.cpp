#include<stdio.h>
int main()
{
	int m,n,i;
	float a,b,c;
	scanf("%d%d",&m,&n);
	b=0;	
	a=m;
	c=m;	
	for(i=0;i<n;i++)
	{	
		b=b+a*2;
		a=a/2;
	}
	b=b-c;
	printf("%.2f  %.2f",a,b);
	return 0;
}
