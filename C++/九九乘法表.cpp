#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			printf("%3d",a*b);
			c++;
			if(c%9==0)printf("\n");
		}
	}
	return 0;
}
