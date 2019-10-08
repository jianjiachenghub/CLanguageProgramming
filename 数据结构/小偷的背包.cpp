#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int w[50],n,t,num;
void dfs(int step,int x)
{
	
    if(x==num)  t = 1;
    printf("%d %d\n",step,x);
    if(step >= n) return; 
    
    dfs(step+1,x);
    dfs(step+1,x+w[step]);

}
int main()
{
    while(~scanf("%d %d",&num,&n))
    {
        for(int i = 0;i < n;i++)
        {
            scanf("%d",&w[i]);
        }
        t = 0;
        dfs(0,0);
         
        if(t == 1) printf("yes!");
        else printf("no!");
    }
}
