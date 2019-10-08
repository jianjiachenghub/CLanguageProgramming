#include<stdio.h>
int main()
{
	int a,b,c,i(0);
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=5;b++)
		{
			for(c=1;c<=5;c++)
			{
				if(a!=b&&b!=c&&c!=a)
				{
				printf("%d%d%d\n",a,b,c);
				i++;
				}				
			}
		}
	}
	printf("%d",i);
}

