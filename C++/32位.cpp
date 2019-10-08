#include <iostream>
using namespace std;
class Solution {
public:
	int reverse(int x)
	{
		int reverseX=0;
		int temp;
		int a;
		int biaozhi=1;
		if (x<0)//如果x小于0，将它变成正的
		{
			x=-x;
		}
		while(x!=0)
		{
			if (reverseX>(INT_MAX-x%10)/10)
			{
				return 0;
			}
			else
			{
				temp=x%10;
				reverseX=reverseX*10+temp;
				x=x/10;
			}
		}
		return reverseX*biaozhi;
	}
};

int main()
{
	Solution s;
	int i=s.reverse(1534236469);
	cout<<i<<endl;
	return 0;
}
