#include<stdio.h>
#include<math.h>
int main ()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a>b){
			int j;
			j=b;
			b=a;
			a=j;
		}
		int count=0;
		int i=a;
		for(a;a<=b;a++)
		{
			float c = sqrt(a);
			for(int i=2;i<=c;i++)
			{
				if(a%i==0)
				{
					count++;
					break;	
				}
			}
		}
		int z=b-i+1-count;
		printf("%d\n",z);
	}
	
}
