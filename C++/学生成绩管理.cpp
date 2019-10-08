#include<stdio.h>
#include<string.h>
struct STU
{
   int id;
   char cs[40];
   char name[40];
   double a;
   double b;
   double c;
   double avg;
};
int main()
{
   int n,i;
   scanf("%d",&n);
   STU student[1000];
   STU maxstu;
   for(i=0;i<n;i++)
   {
      scanf("%d %s %s %lf %lf %lf",
		  &student[i].id,student[i].cs,student[i].name,
		  &student[i].a,&student[i].b,&student[i].c);
	  student[i].avg=(student[i].a+student[i].b+student[i].c)/3;
   }
   for(i=0;i<n;i++)
   {
   printf("%s %.1lf\n",student[i].name,student[i].avg);
   }
   maxstu = student[0];
   for (i=1;i<n;i++)
   {
     if(student[i].avg >maxstu.avg )
	 {
		 maxstu=student[i];
	 }
   }
   printf("%d %s %s %.1lf %.1lf %.1lf %.1lf\n",maxstu.id ,maxstu.cs ,maxstu.name ,maxstu.a ,maxstu.b ,maxstu.c ,maxstu.avg );

 return 0;
}
