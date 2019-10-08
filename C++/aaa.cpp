# include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	while(c!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			if(c>='a'&&c<='y'||c>='A'&&c<='Y')
				c=c+1;
			else
				c=c-25;
		}
		printf("%c",c);
		scanf("%c",&c);
	}
	printf("\n");
	return 0;
}

