#include<stdio.h>
#include<string.h>
int main ()
{
	int year,month,day,count=0,sum=0,sumday=0,week;
	int data[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	char weekData[7][10] = {"Sunday","Monday","Tuesday","Wesdesday","Thursday","Friday","Saturday"};
	scanf("%d %d %d",&year,&month,&day);
	if(year%4==0&&year%100!=0||year%400==0)
		{
			data[1]++;
		}
	for(int i=0;i<month-1;i++)
	{
		sumday+=data[i];
	}
	for(int i=1;i<year;i++)
	{
		if(i%400==0||i%4==0&&i%100!=0)
		{
			count++;
		}
	}
	sum=sum+(year-1)*365+count+sumday+day;
	week=sum%7;
	printf("%s\n",weekData[week]);
}
