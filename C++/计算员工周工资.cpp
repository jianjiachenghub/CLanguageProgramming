#include<stdio.h>
int main()
{
	float time,pay,allpay=0;
	scanf("%f %f",&time,&pay);
	if(time>7*24||time<0)
	{
		printf("input is wrong!\n");
	}
	else
	{
		if(time<=40)
		{
			allpay = pay*time;
		}
		else if(40<time<=60)
		{
			allpay = pay*40+pay*(time-40)*1.5; 
		}
		else if(60<time)
		{
			allpay = pay*40+pay*20*1.5+time-60;
		}
		printf("%g\n",allpay);
	}
}
