#include<iostream>
#include<stdlib.h>
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
void getnode(node *&p)
{
	if(p!=NULL){
		getnode(p->lchild);
		getnode(p->rchild);
		cout<<p->data;
	}

		

}
int main()
{
	node *root;
	buildtree(root);
	getnode(root);
}
