#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
using namespace std;
int aa(char a,char b)
{
	if(a == '['&&b == ']') return 1;
	if(a == '('&&b == ')') return 1;
	if(a == '{'&&b == '}') return 1;
	return 0;
}
int judge(char a[])
{
	char t[1000];
	int count = 0;
	int len = strlen(a);
	for(int i = 0;i < len;i++)
	{
		if(a[i] == '('||a[i] == '{'||a[i] == '[')
		{
			t[count++] = a[i];
		}
		else if(aa(t[count - 1],a[i]))
		{
			count--;
		}
		else return 0;
	}
	if(count == 0) return 1;
	
}
int main()
{
	char s[1000];
	cin>>s;
	if(judge(s)) cout<<"YES";
	else cout<<"NO";
    return 0;
} 
