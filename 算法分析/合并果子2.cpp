#include <iostream>
#include <queue>
#include <functional>
using namespace std;
priority_queue < int, vector<int>, greater<int> > q;
int main()
{

    int n, temp, r=0;
    cin>>n;
    for (int i=0; i<n; i++)  { cin>>temp; q.push(temp);  }
    while (q.size()>1)
    {
       int a=q.top(); q.pop();
       int b=q.top(); q.pop();
       q.push(a+b);
       r+=a+b; 
    }
    cout<<r<<endl;
    return 0;
}

