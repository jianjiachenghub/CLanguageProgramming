#include<stdio.h>
int main()
{
	void swap(int*a,int*b); 
	int *e,*f;
	int c,d;
	scanf("%d,%d",&c,&d);
	e=&c;
	f=&d;
	if(c<d)swap(e,f);
	printf("max=%d,min=%d",c,d);
	return 0;
}
void swap(int*a,int*b)
{
	int ab;
	ab=*a;
	*a=*b;
	*b=ab;
}
