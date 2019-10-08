#include<stdio.h>
int main()
{
	int a,n;
	while(~scanf("%d",&n))
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a);
			if(a%2!=0)
			{
				printf("0 0\n");
			}
			if(a%4==0)
			{
				printf("%d %d\n",a/4,a/2);
			}
			if(a%2==0&&a%4!=0)
			{
				printf("%d %d\n",1+(a-2)/4,a/2);
			}	
		} 
	} 
	return 0;
}
