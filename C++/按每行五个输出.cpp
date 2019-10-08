#include<iostream>
using namespace std;
int main()
{	
	int a[10]={34,91,83,56,29,93,54,12,88,72};
	int b,c,d;
	for(b=0;b<=9;b++)
	{
		for(c=0;c<=10-b-1;c++)
		{
			if(a[c]>a[c+1])
			{
				d=a[c];
				a[c]=a[c+1];
				a[c+1]=d;
			}
		}
		cout<<d<<" ";
		if((b+1)%5==0)cout<<endl;
	}
	return 0;
}

