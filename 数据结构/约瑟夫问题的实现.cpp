#include <stdio.h>
int main()
{
  	int n,m;
  	scanf("%d",&n);
  	scanf("%d",&m);
	int a[n] = {0};//�����ʼ��
	int i,j;
    for(i = 0; i < n; i++)//�������
	{
      a[i] = i+1;
	}
	i=0;//�������
	while (n > 1)
  	{  		
      	i = (i + m - 1) % n;// ��̭����
        printf("%d\n",a[i]);
	    for(j = i+1; j < n; j++)
	    {
	        a[j-1] = a[j];
	    }
	    n--;
	    if(i == n)//�յ�󣬿�ʼ���
	    {
	        i = 0;
	    }
	}
  	printf("%d\n", a[i]);
  
  	return 0;
}

