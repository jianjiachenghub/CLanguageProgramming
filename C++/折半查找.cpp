#include<iostream>
using namespace std; 
int main()
{  int a[ ]={-123, -10, 5, 8, 30, 56, 59, 66, 90, 518};//ѧ��Ҳ����������
    int n,k,i;
    cout<<"����Ҫ��ѯ�Ĺؼ�ֵ:";
    cin>>k;
    cout<<endl;
    int low = 0,high =9,find = -1,m;     //find=-1��ʾû���ҵ�
    while (low <= high &&find==-1)
    {
        m =(low+high)/2;
        if (k == a[m])
            {find = 1;      //find=1��ʾ�Ѿ��ҵ�
            cout<< k<<"�ҵ���,�ڵ�"<< m+1<< "��λ�á�"<<endl;}
        else
            {if (k < a[m])
                high =m-1;
            else
                low =m+1;}
    }
    if (find==-1)
        cout<< k<<"û���ҵ���"<<endl;
    return 0;
}

