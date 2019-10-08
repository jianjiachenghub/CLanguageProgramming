#include<stdio.h>
#include<string.h>
int main()
{
	int sum;
	int a,b;
	scanf("%d %d",&a,&b);
	sum = 0;
	for(int i=1;i<100;i++)
	{
		
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}else if(j==i-1)
			{
					sum++;
					if(sum>=a&&sum<=b)
					{
						printf("%d ",i);
						if((sum-a+1)%10==0)
						{
							printf("\n");
						}
					}
			}
		
		}
	}
	
}
