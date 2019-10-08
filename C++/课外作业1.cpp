#include<stdio.h>
int main()
{
	int a,x,b,y,r1,r2,sum1=0,sum2=0,sum;
	scanf("%d %d %d %d",&a,&x,&b,&y);
	while(a>0)
	{
		r1 = a%10;
		a = a/10;
		if(r1==x)
		{
			sum1=sum1*10+r1;
		}
	}
	
	while(b>0)
	{
		r2 = b%10;
		b = b/10;
		if(r2==y)
		{
			sum2=sum2*10+r2; 
		}
	}
	sum = sum1+sum2;
	printf("%d\n",sum);
	
	
}
