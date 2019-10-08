#include<stdio.h>
int main()
{
	int a[4][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
	int b[5][4],i,j,c,d;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=4;j++)
		{
			b[j][i]=a[i][j];
		}	
	}
	for(c=0;c<=4;c++)
	{
		for(d=0;d<=3;d++)
		{
			printf("%-5d",b[c][d]);
				
		}
			printf("\n");
	}
}
