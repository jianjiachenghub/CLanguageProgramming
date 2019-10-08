#include<iostream>
#include<string.h>
using namespace std;
char zhong[1000],xian[1000];
int e1,e2;
struct node{
	char data;
	node *lchild;
	node *rchild;
};
node* buildtree(int s1,int e1,int s2,int e2)
{//node*函数返回node*变量赋值给父级 
	int index=0;//必须写到递归里每次重0遍历 
	for(int i=s2;i<=e2;i++)
	{
		if(zhong[i]==xian[s1])
		{
			index=i;
			break;
		}
	}
	node *p=new node;
	p->data=xian[s1];
	p->lchild=NULL;
	p->rchild=NULL;//通过中序队列中，前序的第一个确定的根元素的位置，来确定是否含有左右子树 
	if(index!=s2)p->lchild=buildtree(s1+1,s1+index-s2,s2,index-1);
	if(index!=e2)p->rchild=buildtree(s1+index-s2+1,e1,index+1,e2);
	return p;
	
}
void EpilogueOutput(node *p)
{
	if(p != NULL)
	{
		EpilogueOutput(p->lchild);
		EpilogueOutput(p->rchild);
		cout<<p->data;
	}
}
int main()
{
	cin>>zhong;
	cin>>xian;
	e1=strlen(xian)-1;
	e2=strlen(zhong)-1;
	node *p=buildtree(0,e1,0,e2);
	EpilogueOutput(p);
}
