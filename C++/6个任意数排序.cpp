#include<stdio.h>
int main()
{
	int a[6]={1,2,7,54,6,9};
	int i,j,h;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int c;
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	}
	for(h=0;h<=5;h++)
	printf(" %d",a[h]);
	return 0;
}
