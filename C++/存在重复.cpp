#include<stdio.h>
int main()
{
	char containsDuplicate(int* nums,int numsSize);	
	char arry[]="asfasfas";
	containsDuplicate(arry,8);		
}
char containsDuplicate(int* nums, int numsSize)
{
	int flag=1;
	for(int j=0;j<numsSize-1;j++) 
	{
		int i;
		for(i=j+1;i<numsSize;i++)
		{
			if(nums[j]==nums[i])
			{
				flag=2;
				printf("true");break;
			}
		}		
	
	}
		if(flag==1)
		{
			printf("false");
		}					   
} 
