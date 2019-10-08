#include<stdio.h>
#include<string.h>
int main()
{
	int firstUniqChar(char* s);
	char s[]="abccc";
	firstUniqChar(s);
	
}

int firstUniqChar(char* s) 
{
    int counter[26] = {0};
    int b;b=strlen(s);
        for(int i=0; i<b; ++i)
        ++counter[s[i] - 'a'];

    for (int i=0; i<26; ++i)
    {
        if(1 == counter[s[i] - 'a'] )
            return i;
    }

    return -1;
}    

