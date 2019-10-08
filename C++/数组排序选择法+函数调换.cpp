#include<iostream>
using namespace std;
void sort(int n, int iArray[]);
void swap(int & a, int & b);
int main()
{	int i,n;
	int iArray[10];
	cout<<"Please input array number:"<<endl;
	cin>>n;
	cout<<"Please input all the integer:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>iArray[i];
	}
   sort(n,iArray);
}

void sort(int n,int iArray[])
{
	int i,j,p;
	for(i=0;i<n-1;i++)
	{	p=i;
		for(j=i+1;j<n;j++)
			if(iArray[p]>iArray[j]) p=j;
			if (p!=i) swap(iArray[p], iArray[i]);}
	for(i=0;i<n;i++)
	{
		cout<<iArray[i]<<endl;
	}		 
}
 void swap(int &a,int &b)
{
	int xy;
	xy=a;
	a=b;
	b=xy;
}

