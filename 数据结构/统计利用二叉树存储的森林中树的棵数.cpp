//����һ�ö������ĸ��ڵ����Һ��ӣ�����ö������ܹ�ת��Ϊɭ�֣�����ת��Ϊһ������
//�Ӹ��ڵ㿪ʼ�����Һ��Ӵ��ڣ�������Һ��ӽ�������ɾ�����ٲ鿴�����Ķ�������������ڵ���Һ��Ӵ��ڣ�������ɾ������ֱ��������Щ���ڵ����Һ��ӵ����߶�ɾ��Ϊֹ��
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
