#include<iostream>
using namespace std; 
int main( )
{   int a[10]={1,2,5,8,9,10},an=5;
    int b[10]={1,3,4,8,12,18}, bn=5;
    int i,j,k, c[20], max=9999;
   a[an+1]=b[an+1]=max;
    i=j=k=0;
while(  a[i]!=max||b[j]!=max)
 {  if(a[i]<b[j])
    {  c[k]=a[i];
        k++;
        i++;}
     else
     {   c[k]=b[j];
          k++;
        	j++;}
 }  
for(i=0;i<k;i++)cout<<c[i]<<" ";
    cout<<endl;
}
