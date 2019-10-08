#include<stdio.h>
#include<math.h>
int main()
{
	int count(int a,int b);
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		count(a,b);
	}
	return 0; 
}
int count(int a,int b){
	int sum=0,c;
	c = b-a+1;
	if(a<2||b>1000){
		return 0;
	}
	else
	{
		
		for(a;a<=b;a++)
		{
			for(int i=2;i<=sqrt(a);i++)
			{
				if(a%i==0)
				{
					sum++;
					break;printf("%d\n",a);	
				}
			}
		}
		printf("%d\n",c-sum);	
	}
}
