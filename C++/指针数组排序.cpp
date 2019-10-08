#include <iostream>
using namespace std;
void buble(int *m,int count);
int main()
{
	int a[10]={3,5,2,1,9,8,6,4,7,10};
	cout<<"ÅÅÐòºóÎª:"<<endl;
	buble(a,10);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
}
void buble(int *m,int count)
{
	for(int i=0;i<count;i++)
	{
		for(int j=count-1;j>i;j--)
			if(*(m+j)<*(m+j-1))
			{
				int temp=*(m+j);
				*(m+j)=*(m+j-1);
				*(m+j-1)=temp;
			}
	}
}
