#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
char hou[10001],zhong[10001];
struct node{
	char data;
	node*  lchild;
	node*  rchild;
};
node *buildtree(int s1,int e1,int s2,int e2)
{
	node *p=new node;
	p->data=hou[e1];
	p->lchild=NULL;
	p->rchild=NULL;
	int index=0;
	for(int i=s2;i<=e2;i++)
	{
		if(hou[e1]==zhong[i])
		{
			index =i;
			break;
		}
	}
	if(s2!=index)
	{
		p->lchild=buildtree(s1,s1+index-s2-1,s2,index-1);
	}
	if(e2!=index)
	{
		p->rchild=buildtree(s1+index-s2,e1-1,index+1,e2);
	}
	return p;
}
void EpilogueOutput(node *p)
{
	if(p != NULL)
	{	
		cout<<p->data;
		EpilogueOutput(p->lchild);
		EpilogueOutput(p->rchild);
	
	}
}
int main()
{
	cin>>zhong;
	cin>>hou;
	int e1=strlen(hou)-1;
	int e2=strlen(zhong)-1;
	node *mytree=buildtree(0,e1,0,e2);
	EpilogueOutput(mytree);
}
