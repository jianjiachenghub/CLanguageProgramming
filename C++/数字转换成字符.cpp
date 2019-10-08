#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",sizeof(a),sizeof(char));
	char c=a,d=b;
	printf("%c %c\n",c,d);
	return 0;
}

