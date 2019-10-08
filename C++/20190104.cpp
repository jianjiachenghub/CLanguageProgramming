#include<stdio.h>
#include<string.h>
int change(char arr[20])
{
	if(strcmp("one",arr)==0)return 1;
	if(strcmp("two",arr)==0)return 2;
	if(strcmp("three",arr)==0)return 3;
	if(strcmp("four",arr)==0)return 4;
	if(strcmp("five",arr)==0)return 5;
	if(strcmp("six",arr)==0)return 6;
	if(strcmp("seven",arr)==0)return 7;
	if(strcmp("eight",arr)==0)return 8;
	if(strcmp("nine",arr)==0)return 9;
	if(strcmp("zero",arr)==0)return 0;
}
int main()
{
	int change(char arr[20]);
	char arr[20];
	scanf("%s",arr);
	int a = change(arr),sum1,sum2;
	scanf("%s",arr);
	if(strcmp("+",arr)!=0){
		a=a*10+change(arr);
		scanf("%s",arr);
	}
		printf("%d\n",a);
	scanf("%s",arr);
	int c = change(arr);
	scanf("%s",arr);
	if(strcmp("=",arr)!=0){
		c=c*10+change(arr);
		scanf("%s",arr);
	}
	printf("%d",a+c);
	
	
}
