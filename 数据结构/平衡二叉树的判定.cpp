#include <iostream>
#include<algorithm>

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
        p =new node;
        p->data = A;
        buildtree(p->lchild);
        buildtree(p->rchild);
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
    int r,l;
    r=gethight(root->lchild);
	l=gethight(root->rchild);
	if(abs(r-l)<=1)
	{
		   cout<<"yes!";
	}else{
		cout<<"no!";
	}
 
}
