#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int n,x[100001],y[100001],i;
    int a,b,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    sort(x,x+n);
    sort(y,y+n);
    if(n%2==1)
    {
        a=x[n/2];
        b=y[n/2];
    }
    else 
    {
        a=(x[n/2-1]+x[n/2])/2;
        b=(y[n/2-1]+y[n/2])/2;
    }
    for(i=0;i<n;i++)
    {
        sum+=abs(a-x[i])+abs(b-y[i]);
    }
    printf("%d\n",sum);
    return 0;

} 
