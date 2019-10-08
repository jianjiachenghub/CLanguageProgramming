#include<stdio.h>
int main()
{
	int a,b,c,l,maxc,minl;
	scanf("%d %d",&a,&b); 
	int arr[a][b];
	for(int i=0;i<a;i++)
	{
	    for(int j=0;j<b;j++)
	    {
	        scanf("%d",&arr[i][j]);
	    }
	}
	for(int i=0;i<a;i++)
	{
	    	maxc = arr[i][0];
	    	for(int j=0;j<b-1;j++)
	    	{
	    		if(maxc<arr[i][j+1])
	     		{
	      			c = j+1;
	      			maxc = arr[i][j+1];
				}
	    	}
	    	printf("c=%d",c);
	    	minl = arr[c][0];
	    	for(int j=0;j<b-1;j++)
	    	{
				
	    		if(minl>arr[c][j+1])
	     		{
	      			l = j+1;
	      			minl = arr[c][j+1];
				}
	    	}
	    	printf("l=%d",l);
	    	if(i==l){
	    		printf("%d",arr[i][c]);
			}
	    	c=0;
			l=0;
			
	}
	
	
	
}
