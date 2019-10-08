#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
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
	queue<node*>q;
	if(p!=NULL){
		q.push(p);
	}
	while(!q.empty())
	{
		if(q.front()->lchild)q.push(q.front()->lchild);
		if(q.front()->rchild)q.push(q.front()->rchild);
		cout<<q.front()->data;
		q.pop();
	}
}
int main()
{
	node *root;
	buildtree(root);
	getnode(root);
}
