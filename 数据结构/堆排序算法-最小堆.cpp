#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void adjust(int arr[], int len, int index)
{
    int left = 2*index + 1;
    int right = 2*index + 2;
    int mindex = index;
    if(left<len && arr[left]<arr[mindex]) mindex = left;
    if(right<len && arr[right] <arr[mindex]) mindex = right; 
    if(mindex != index)                
    {
        swap(arr[mindex], arr[index]);
        adjust(arr, len, mindex);   
    }

}
void heapSort(int arr[], int size)
{
    for(int i=size/2 - 1; i >= 0; i--) 
    {
        adjust(arr, size, i);
    }
    		for(int i1=0;i1<size;i1++)
    	{
        	cout<<arr[i1]<<" ";
    	}
    for(int i = size - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);
        adjust(arr, i, 0);             
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
