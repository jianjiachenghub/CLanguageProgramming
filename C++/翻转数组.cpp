#include<stdio.h>  
#include<time.h>  
#include<stdlib.h>  
#define SIZE 10  
void rightshift(int array[],int n,int k);   //右移函数的原型声明  
int main()  
{  
    int array[SIZE],i,k;  
   for(i=0;i<SIZE;i++)  
    {  
        array[i]=rand()%100+1;  
    }  
   printf("Before shifed,the array's elements are :\n");  
    for(i=0;i<SIZE;i++)  
    {  
        printf("%d  ",array[i]);  
    }  
    printf("please input a number:\n");  
    scanf("%d",&k);  
   rightshift(array,SIZE,k);   //调用右移函数  
    printf("After shifed,the array's elements are :\n");  
    for(i=0;i<SIZE;i++)  
    {  
        printf("%d  ",array[i]);  
    }  
    printf("\n");  
}  
void rightshift(int array[],int n,int k)  
{  
    int p,q,pre_temp,m,temp;  
    p=0;  
    m=0;  
    q=p;  
    pre_temp=array[p];  
    while(m<n)   //每次移动只有一个数据到位，这里用m记下有多少个数据已到位  
    {             
        do        
       {  
           q=(q+k)%n;  
           temp=pre_temp;  
          pre_temp=array[q];  
          array[q]=temp;  
        m++;  
        }while(p!=q);  
        if(m<n)  
        {  
            ++p;  
            q=p;  
            pre_temp=array[p];  
        }  
    }  
}  

