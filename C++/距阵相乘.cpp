#include<stdio.h>
int main()
{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        scanf("%d",&b[i][j]);
	    }
	}
	for(int k=0;k<3;k++)
	{
		for(int l=0;l<3;l++)
		{
			c[k][l]=0;
			for(int m=0;m<3;m++)
			{
				c[k][l]+=a[k][m]*b[m][l];	
			}
			printf("%d ",c[k][l]);
		}
			printf("\n");
	}
	return 0;
}

