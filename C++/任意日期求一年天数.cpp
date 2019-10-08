#include<stdio.h>
int main()
{
	int a,y,b,c,d,e;
	scanf("%d%d%d",&a,&y,&c); 
	if(a%400==0||a%4==0&&a%100!=0){d=1;}
	else{d=0;}
	switch(y)
	{
		case 1:b=31;break;
		case 2:b=59;break;
		case 3:b=90;break;
		case 4:b=120;break;
		case 5:b=151;break;
		case 6:b=181;break;
	 	case 7:b=212;break;
	 	case 8:b=243;break;
		case 9:b=273;break;
		case 10:b=304;break;
		case 11:b=334;break;
		case 12:b=365;break;
		default:putchar('\a');
	}
	e=b+c;
	if(d=1&&b>2)e=e+d;
	printf("这一年你已度过了%d天",e);
	return 0;
}
		
