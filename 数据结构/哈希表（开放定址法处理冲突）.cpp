 #include<iostream>
using namespace std;

int main()
{
	int head[1000]={-1};
	for (int i = 0;i < 1000;i++)
	{
		head[i] = -1;
	}
	int m,n,coun=0;
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		int temp,index;
		index=temp%m;
		cin>>temp;
		if(head[temp%m]==-1)
		{
			head[temp%m]=temp;
		}
		else{
			while(head[index]!=-1)
			{
				index=(index+1)%m;
				coun++;
			}
			head[index]=temp;
		}
	}
	int data,count=1,flag=0;
	cin>>data;
	int index=data%m;
	while(head[index]!=data&&head[index]!=-1&&index<=13)
	{
		count++;
		index=(index+1)%m;
	}
	if(head[index]==data)
	{
		cout<<index<<","<<count;
		
	}else{
		cout<<-1;
	}

	
}
