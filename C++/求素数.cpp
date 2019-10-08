 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int i,j,a;
 	a=0;
 	for(i=101;i<=200;i++)
 	{
 		for(j=2;j<=sqrt(i);j++)
 		{
 			if(i%j!=0)
			 {
			 	printf("%d  ",i);
			 	a++;
			 }
			 break;
 		}
	 }
	printf("          %d",a);
	return 0;
  } 
