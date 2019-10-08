#include <iostream>
int main ()
{
	long dx(long a);
	long a,g;
	scanf("%d",&a);
	g=dx(a);
	printf("%d\n",g);
	return 0;
}
long dx(long a)
{
	if(a<0){a=-a;
	} 
	long c;
	long d=0;	
	while(a)
	{
		c=a%10;
		a=a/10;
		d=d*10+c;
	}
	if (a>(INT_MAX-x%10)/10){return 0;}  
 	return d;
}


