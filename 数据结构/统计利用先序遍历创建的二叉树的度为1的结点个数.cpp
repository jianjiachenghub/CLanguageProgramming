#include<iostream>
#include<stdlib.h>
using namespace std;

int i=0;
struct node{
	char data;
	node *lchild;
	node *rchild;
};
void buildtree(node *&p)
{
	char A;
	cin>>A;
	if(A=='#') p=NULL;
	else{
		p=(node*)malloc(sizeof(node));
		p->data=A;
		buildtree(p->lchild);
		buildtree(p->rchild);
	}
}
int getnode(node *&p)
{
	int l,r;
	if(p==NULL){
		return 0;
	}
	else
	{
		l=getnode(p->lchild);
		r=getnode(p->rchild);
		if(l+r==1)
		{
			i++;
		}
		return 1;
	}
}
int main()
{
	node *root;
	buildtree(root);
	getnode(root);
	cout<<i;
}
