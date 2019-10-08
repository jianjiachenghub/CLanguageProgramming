#include <stdio.h>
#include <string.h>
int Change(char s[20])
{
    if(strcmp(s,"one") == 0)  return 1;
    if(strcmp(s,"two") == 0)  return 2;
    if(strcmp(s,"three") == 0)  return 3;
    if(strcmp(s,"four") == 0)   return 4;
    if(strcmp(s,"five") == 0) return 5;
    if(strcmp(s,"six") == 0)  return 6;
    if(strcmp(s,"seven") == 0)    return 7;
    if(strcmp(s,"eight") == 0)    return 8;
    if(strcmp(s,"nine") == 0) return 9;
    if(strcmp(s,"zero") == 0) return 0;
}
int main()
{
    int a,b;
    char s[20];
    while(scanf("%s",s)!=EOF)
    {
        a = Change(s);
        scanf("%s",s);
        if(strcmp(s,"+") != 0)
        {
            a = a*10+Change(s);
            scanf("%s",s);
        }
        scanf("%s",s);
        b = Change(s);
        scanf("%s",s);
        if(strcmp(s,"=") != 0)
        {
            b = b*10 + Change(s);
            scanf("%s",s);
        }
        if(a == b && a == 0) break;
        printf("%d\n",a+b);
    }
    return 0;
}
