#include <iostream>
#include <stdlib.h>

using namespace std;
struct node
{
    char data;
    node *lchild;
    node *rchild;
};
void buildtree(node *&p)
{
    char A;
    cin>>A;
    if(A == '#') p = NULL;
    else
    {
        p = (node*)malloc(sizeof(node));
        p->data = A;
        buildtree(p->lchild);
        buildtree(p->rchild);
    }
}
void PreOrder(node *root)//先序遍历
{
	if(root != NULL)
	{
		cout<<root->data;
		PreOrder(root->lchild);
		PreOrder(root->rchild);
	}
}

void InOrder(node *root)//中序遍历
{
	if(root != NULL)
	{
		InOrder(root->lchild);
		cout<<root->data;
		InOrder(root->rchild);
	}
}

int gethight(node *&p)
{
    int lchild,rchild;
    if(p == NULL) return 0;
    else
    {
        lchild = gethight(p->lchild);
        rchild = gethight(p->rchild);
        return max(lchild + 1,rchild + 1);
    }
}
int main()
{
    node *root;
    buildtree(root);
   	PreOrder(root);
 	InOrder(root);

}
