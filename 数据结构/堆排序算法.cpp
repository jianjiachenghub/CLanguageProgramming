#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<math.h>//n=e-v+2
using namespace std;
int h[105],n;
void swap(int x,int y)
{
	int t = h[x];
	h[x] = h[y];
	h[y] = t;
}
void siftdwon(int i)
{
	int t,flag = 0;
	while(i*2 <= n&&flag == 0)
	{
		if(h[i] < h[i*2]) t = i;
		else t = i * 2;
		if(i*2+1 <= n&&h[t] > h[i*2+1]) t = i*2+1;
		if(t != i)
		{
			swap(t,i);
			i = t;
		}
		else flag = 1;
	}
}
void creat()
{
	for(int i = n/2;i >= 1;i--)
	{
		siftdwon(i);
	}
}
void heapsort()
{
	while(n > 1)
	{
		swap(1,n);
		n--;
		siftdwon(1);
	}
 } 
int main()
{
	cin>>n;
	int tn = n;
	for(int i = 1;i <= n;i++) cin>>h[i];
	creat();
	//heapsort();
	for(int i = 1;i <= tn;i++) cout<<h[i]<<" ";
}
