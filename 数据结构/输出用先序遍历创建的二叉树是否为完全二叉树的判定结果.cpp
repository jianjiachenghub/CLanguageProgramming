#include<iostream>
#include<stdlib.h>
using namespace std;
int n0=0,n=0;
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
		n++;
		buildtree(p->lchild);
		buildtree(p->rchild);
	}
}
void getnode(node *&p)
{
	if(p!=NULL){
		if(p->lchild==NULL&&p->rchild==NULL)
		{
			n0++;
		}
		getnode(p->lchild);
		getnode(p->rchild);
	}

		

}
int main()
{
	node *root;
	buildtree(root);
	getnode(root);
	if(n0==n/2||n0==(n+1)/2)
	{
		cout<<"Y";
	
	}else{
		cout<<"N";
	}

	
}
