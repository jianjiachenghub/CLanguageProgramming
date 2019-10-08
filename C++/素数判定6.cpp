# include<stdio.h>
int main()
{
	int a,b,t,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int n,i=0;
		if(a>b)
		{t=a;
		a=b;
		b=t;}
		for(n=a;n<=b;n++)
		{
			for(t=2;t<=n-1;t++)
			if(n%t==0) break;
			else 
			if(n%t!=0&&t==n-1) i++;
		}
	if(a==2) i=i+1;
	else i=i;
	printf("%d\n",i);
	}
	return 0;
}
