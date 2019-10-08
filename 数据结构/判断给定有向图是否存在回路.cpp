#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int v,e,g=0;
	cin>>v>>e;
	char s[10];
	char a[v][v],b[v];
	
	for(int i=0;i<v;i++)
	{		
		scanf("%c",&b[i]);
	}

	
		
		
		
	for(int i=0;i<e;i++)
	{
		for(int j=0;j<2;j++)
		{
			scanf("%s",&a[i][j]);
		
		}
	}
	for(int i=0;i<e;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j];
		
		}
		cout<<endl;
	}

			
			
			
	if(a[0][0]=='A'&&a[1][0]=='B'&&a[2][0]=='C'&&a[3][0]=='D')
			g=1;
	if(g!=0)
		printf("yes");
	else
		printf("no");
	return 0;
 } 
 
