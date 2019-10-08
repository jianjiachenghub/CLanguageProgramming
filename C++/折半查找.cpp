#include<iostream>
using namespace std; 
int main()
{  int a[ ]={-123, -10, 5, 8, 30, 56, 59, 66, 90, 518};//学生也可自拟数据
    int n,k,i;
    cout<<"输入要查询的关键值:";
    cin>>k;
    cout<<endl;
    int low = 0,high =9,find = -1,m;     //find=-1表示没有找到
    while (low <= high &&find==-1)
    {
        m =(low+high)/2;
        if (k == a[m])
            {find = 1;      //find=1表示已经找到
            cout<< k<<"找到了,在第"<< m+1<< "个位置。"<<endl;}
        else
            {if (k < a[m])
                high =m-1;
            else
                low =m+1;}
    }
    if (find==-1)
        cout<< k<<"没有找到。"<<endl;
    return 0;
}

