#include<iostream>
#include<queue>
using namespace std;
priority_queue<int>p;
int main()
{
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		p.push(-x);
	}
	while(p.size()>1)
	{
		int max1=p.top();
		p.pop();
		sum-=max1;
		int max2=p.top();
		p.pop();
		sum-=max2;
		p.push(max1+max2);
	}
	cout<<sum<<endl;
	
}
