//1.���ߡ���ĳ���X�����ӽ����ڣ���������ӵ��Һ��ӽ�㡢�Һ��ӵ��Һ��ӽ�㡢�Һ��ӵ��Һ��ӵ��Һ��ӽ�㡭������Ϊ���X�ĺ��ӡ������X����Щ�Һ��ӽ����������������
//2.ȥ�ߡ�ɾ��ԭ�����������н�������Һ��ӽ������ߡ�
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
