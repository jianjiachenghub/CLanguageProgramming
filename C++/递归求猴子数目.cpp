#include<stdio.h>
int main()
{
	int sum(int c);
	int b;
	b=sum(1);
	printf("%d",b);
	return 0; 
}
int sum(int c)
{
	int a;
	if(c==10)a=1;
	else a=sum(c+1)*2+1;
	return a;
}
