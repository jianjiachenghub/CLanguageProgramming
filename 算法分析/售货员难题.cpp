#include<iostream>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<map>
#include<string>
#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;
int dp[25][(1 << 21)];
 
int main()
{
	int n;
	while (cin >> n) {
 
		int mp[25][25];
		memset(dp, 2, sizeof(dp));
		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				cin >> mp[i][j];
			}
		}
		dp[0][0] = 0;
		for (int i = 0;i < n;i++) {
			dp[i][0] = mp[i][0];
		}
		for (int j = 0;j < (1 << (n-1));j++) {
			for (int i = 0;i < n;i++) {
				if (((j >> (i - 1))&1) != 1) {
					for (int k = 1;k < n;k++) {
						if (((j >> (k - 1))&1) == 1) {
							dp[i][j] = min(dp[i][j], mp[i][k] + dp[k][(j^(1 << (k - 1)))]);
						}
					}
				}
			}
		}
		cout << dp[0][(1 << (n-1)) - 1] << endl;
 
	}
	return 0;
}

