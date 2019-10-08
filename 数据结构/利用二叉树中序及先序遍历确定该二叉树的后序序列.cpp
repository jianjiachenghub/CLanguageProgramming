#include<iostream>
#include<string.h>
using namespace std;
char zhong[1000],xian[1000];
int e1,e2;
struct node{
	char data;
	node *lchild;
	node *rchild;
};
node* buildtree(int s1,int e1,int s2,int e2)
{//node*��������node*������ֵ������ 
	int index=0;//����д���ݹ���ÿ����0���� 
	for(int i=s2;i<=e2;i++)
	{
		if(zhong[i]==xian[s1])
		{
			index=i;
			break;
		}
	}
	node *p=new node;
	p->data=xian[s1];
	p->lchild=NULL;
	p->rchild=NULL;//ͨ����������У�ǰ��ĵ�һ��ȷ���ĸ�Ԫ�ص�λ�ã���ȷ���Ƿ����������� 
	if(index!=s2)p->lchild=buildtree(s1+1,s1+index-s2,s2,index-1);
	if(index!=e2)p->rchild=buildtree(s1+index-s2+1,e1,index+1,e2);
	return p;
	
}
void EpilogueOutput(node *p)
{
	if(p != NULL)
	{
		EpilogueOutput(p->lchild);
		EpilogueOutput(p->rchild);
		cout<<p->data;
	}
}
int main()
{
	cin>>zhong;
	cin>>xian;
	e1=strlen(xian)-1;
	e2=strlen(zhong)-1;
	node *p=buildtree(0,e1,0,e2);
	EpilogueOutput(p);
}
