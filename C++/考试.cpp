#include<stdio.h> 
int main()
{
	float PI=3.14159,v,r,radius,high;
	scanf("%f %f",&r,&high);
	v = PI*r*r*high;
	printf("radius:%.3f\n",r);
	printf("high:%.3f\n",high);
	printf("The volume is:%.3f\n",v);
	return 0;
}
