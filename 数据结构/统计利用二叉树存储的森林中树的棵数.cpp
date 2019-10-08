//假如一棵二叉树的根节点有右孩子，则这棵二叉树能够转换为森林，否则将转换为一棵树。
//从根节点开始，若右孩子存在，则把与右孩子结点的连线删除。再查看分离后的二叉树，若其根节点的右孩子存在，则连线删除…。直到所有这些根节点与右孩子的连线都删除为止。
#include<iostream>
#include<stdlib.h>
#include<queue>
using namespace std;
int i=0;
struct node{
	char data;
	node *lchild;
	node *rchild;
};
void buildtree(node *&p)
{1 
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
		i++;
		getnode(p->rchild);
	}
}
int main()
{
	node *root;
	buildtree(root);
	getnode(root);
	cout<<i;
}
