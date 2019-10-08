 #include<stdio.h>
 int main()
 {
	int removeDuplicates(int A[], int n);
	int a[5]={1,1,2,2,3};
	removeDuplicates(a,5);
	int i;
	for(i=0;i<=4;i++)
	{
	printf(" %d",a[i]);
	}
	return 0;
} 

int removeDuplicates(int A[], int n)
{
	if(n==0) 
	{
		return 0;
	}
	int j = 0;
	for(int i = 1; i < n; i++) 
	{
	if(A[j] != A[i]) 
	{
	A[++j] = A[i];
	}
	}
	return j + 1;
}





