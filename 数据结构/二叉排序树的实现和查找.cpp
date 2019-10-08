//（1）若左子树不空，则左子树上所有结点的值均小于它的根结点的值；
//（2）若右子树不空，则右子树上所有结点的值均大于或等于它的根结点的值；
//（3）左、右子树也分别为二叉排序树；
#include<iostream>
#include<stdlib.h>
using namespace std;
int count=0,flag=0;
struct node{
	int data;
	node *lchild;
	node *rchild;
};
void InsertNode(node *&p,int elem)
{
	if(p==NULL){
		p=(node*)malloc(sizeof(node));
		p->data=elem;
		p->lchild=NULL;
		p->rchild=NULL;
	}else if(elem<p->data){
		InsertNode(p->lchild,elem);
	}else if(elem>p->data){
		InsertNode(p->rchild,elem);
	}
}
void search(node *&p,int elem)
{
	count++;
	if(p!=NULL){
		if(elem!=p->data){
		 	if(elem<p->data){
	 		search(p->lchild,elem);
			}
			else if(elem>p->data){
				search(p->rchild,elem);
			}
		}else{
			flag=1;
		}
}


}
int main()
{
	node *root=NULL;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		InsertNode(root,arr[i]); 
	}
	int x; 
	cin>>x;
	search(root,x);
	if(flag==1)
	{
			cout<<count;
	}else
	{
		cout<<-1;
	}


}
