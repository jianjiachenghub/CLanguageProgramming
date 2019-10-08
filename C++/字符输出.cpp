#include<stdio.h>
#include<string.h>
int main()
{
	void rotate(int* nums, int numsSize, int k);
	int size,k;
	size=7;
	int array[size],i,j;
	for(i=0;i<size;i++)
	{
		printf("%d",array[i]);
	 } 
	printf("%d",k);
	rotate(array,size,k);
	return 0;
}
void rotate(int* nums, int numsSize, int k) 
{
	int i,j,a;
	int c,temp;
	c=0;
	//numsSize=strlen(array);
	for(i=0;i<k;i++)
		{
			for(j=0;j<=numsSize-2;j++)
			{
				temp=*(nums+numsSize-1-j);
				*(nums+numsSize-1-j)=*(nums+numsSize-j-2);
				*(nums+numsSize-j-2)=temp;
			}
		}
	for(c;c<=numsSize-1;c++)
	{
		printf("   %d",*(nums+c));
	}
}
