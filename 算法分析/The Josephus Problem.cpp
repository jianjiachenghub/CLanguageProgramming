//#include <iostream>
//using namespace std;
//int main()
//{
//    int n, f = 0;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//	{
//		f = (f + 2) % i;
//	}
//    cout << f + 1 << endl;
//}
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=log(n)/log(2);
	cout<<(n-pow(2,x))*2+1<<endl;
} 
