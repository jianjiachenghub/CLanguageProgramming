# include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,s=1;
		for(i=2;i<=n;i++)
			s=2*(s+1);
	        printf("%d\n",s);
	}
	return 0;
}
