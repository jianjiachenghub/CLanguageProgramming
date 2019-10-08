#include<stdio.h>
struct stu
{
	int id;
	float E;
	float S;
	float C;
	float M;
	float H;
	float av;
};
int main()
{
	stu students[10000];
	int N;
	scanf("%d",&N);
	float a=0,b=0,c=0,d=0,e=0;
	for(int i=0;i<N;i++)
	{
		scanf("%d %f %f %f %f %f",&students[i].id,&students[i].E,&students[i].S,&students[i].C,&students[i].M,&students[i].H);
	}
	for(int i=0;i<N;i++)
	{
		students[i].av=(students[i].E+students[i].S+students[i].C+students[i].M+students[i].H)/5;
	}
	for(int i=0;i<N;i++)
	{
		printf("%d %g %g %g %g %g %.1f\n",students[i].id,students[i].E,students[i].S,students[i].C,students[i].M,students[i].H,students[i].av);
	}
	for(int i=0;i<N;i++)
	{
		a+=students[i].E;
		b+=students[i].S;
		c+=students[i].C;
		d+=students[i].M;
		e+=students[i].H;
	}
	printf("%.1f %.1f %.1f %.1f %.1f\n",a/N,b/N,c/N,d/N,e/N);
	
}
