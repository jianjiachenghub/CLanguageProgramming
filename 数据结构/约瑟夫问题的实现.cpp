#include <stdio.h>
int main()
{
  	int n,m;
  	scanf("%d",&n);
  	scanf("%d",&m);
	int a[n] = {0};//数组初始化
	int i,j;
    for(i = 0; i < n; i++)//数组遍历
	{
      a[i] = i+1;
	}
	i=0;//数组起点
	while (n > 1)
  	{  		
      	i = (i + m - 1) % n;// 淘汰的人
        printf("%d\n",a[i]);
	    for(j = i+1; j < n; j++)
	    {
	        a[j-1] = a[j];
	    }
	    n--;
	    if(i == n)//终点后，开始起点
	    {
	        i = 0;
	    }
	}
  	printf("%d\n", a[i]);
  
  	return 0;
}

