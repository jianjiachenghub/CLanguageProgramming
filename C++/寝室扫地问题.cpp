#include<stdio.h>
int main()
{
	int year,month,day,i,j,k,sum=0;
	int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d %d %d",&year,&month,&day);
	if(!(year%4==0&&year%100!=0||year%400==0))
		a[2]=28;
	if(year==2007)
	{
		for(i=9;i<month;i++)
			sum+=a[i];
		sum+=day;
	}
	if(year>=2008)
	{
		for(i=2008;i<year;i++)
		{
			if(i%4==0&&i%100!=0||i%400==0)
				sum+=366;
			else
				sum+=365;
		}
		for(i=1;i<month;i++)
			sum+=a[i];
		sum+=day+122;
	}
	k=sum%14;
	if(k==1||k==6||k==11) printf("B\n");
	if(k==2||k==7||k==12) printf("X\n");
	if(k==3) printf("ALL\n");
	if(k==4||k==8||k==13) printf("H\n"); 
	if(k==5||k==9||k==0) printf("P\n");
	return 0;
}
	
