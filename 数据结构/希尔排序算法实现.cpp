#include<stdio.h>
int main()
{
 int n;int data[100];
 scanf("%d",&n);
 for(int i=0;i<n;i++) scanf("%d",&data[i]);
 int d=n/2;//将数组分成2组
 for(int i=d;i<n;i++)
 {
  if(data[i]<data[i-d])
  {
   int t=data[i];
   data[i]=data[i-d];
   data[i-d]=t;
  }
 }
 for(int i=0;i<n;i++) printf("%d ",data[i]);
}

