#include<iostream>
#include<stdlib.h>
using namespace std;
int mmax=0;
int arr[100]={0};
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
void getwidth(node *&p,int n)
{
	if(p!=NULL)
	{
		arr[n]++;
		if(arr[n]>mmax)mmax=arr[n];
		getwidth(p->lchild,n+1);
		getwidth(p->rchild,n+1);
	}
}
int main()
{
	node *root;
	buildtree(root);
	getwidth(root,1);
	cout<<mmax;
}
