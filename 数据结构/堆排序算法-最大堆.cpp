#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void adjust(int arr[], int len, int index)
{
    int left = 2*index + 1;
    int right = 2*index + 2;
    int maxIdx = index;
    if(left<len && arr[left] > arr[maxIdx]) maxIdx = left;
    if(right<len && arr[right] > arr[maxIdx]) maxIdx = right;  // maxIdx��3��������������±�
    if(maxIdx != index)                 // ���maxIdx��ֵ�и���
    {
        swap(arr[maxIdx], arr[index]);
        adjust(arr, len, maxIdx);       // �ݹ������������������ʵĲ���
    }

}
void heapSort(int arr[], int size)
{
    for(int i=size/2 - 1; i >= 0; i--)  // ��ÿһ����Ҷ�����жѵ���(�����һ����Ҷ��㿪ʼ)
    {
        adjust(arr, size, i);
    }
          for(int i1=0;i1<size;i1++)
    	{
        	cout<<arr[i1]<<" ";
    	}
    	cout<<endl;
    for(int i = size - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);           // ����ǰ���ķ��õ�����ĩβ
        for(int i1=0;i1<size;i1++)
    	{
        	cout<<arr[i1]<<" ";
    	}
    	cout<<endl; 
        adjust(arr, i, 0);              // ��δ�������Ĳ��ּ������ж�����
    }
}

int main()
{
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    heapSort(array, n);	
    return 0;
}
