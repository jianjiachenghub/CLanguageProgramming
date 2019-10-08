#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};
int main()
{
	node* head[100]={NULL},* tail[100]={NULL};//必须定义两个存放node的地址数组 一个存放表头以便尾插和访问 
	int m,n;
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		node *p=new node;
		p->data=temp;
		p->next=NULL;
		if(head[temp%m]==NULL)
		{
			head[temp%m]=p;
			tail[temp%m]=head[temp%m];	
		}else
		{
			tail[temp%m]->next=p;
			tail[temp%m]=p;
		}
	}
	int data,count=0,flag=0;
	cin>>data;
	node* p=head[data%m];
	while(p!=NULL)
	{
		count++;
		if(p->data==data)
		{
			flag=1;
			break;
		}
		p=p->next;	
	}
	if(flag==1){
		cout<<data%m<<","<<count;
	}else
	{
		cout<<-1;
	}
	
}
