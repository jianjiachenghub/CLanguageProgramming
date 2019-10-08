//1.加线。若某结点X的左孩子结点存在，则将这个左孩子的右孩子结点、右孩子的右孩子结点、右孩子的右孩子的右孩子结点…，都作为结点X的孩子。将结点X与这些右孩子结点用线连接起来。
//2.去线。删除原二叉树中所有结点与其右孩子结点的连线。
#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
int i=0,arr[100]={0},max1=0;
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
	if(p!=NULL){
		arr[i]++;
		max1=max(max1,arr[i]);
		getnode(p->rchild);
	}else
	{
		i++;
	}
}
int main()
{
	node *root;
	buildtree(root);
	if(root->rchild){
		cout<<"ERROR";
		return 0;
	}
	while(root!=NULL){
		getnode(root->lchild);
		root=root->lchild;
	}

	cout<<max1;
}
