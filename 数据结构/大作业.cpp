#include <iostream>
#include <string>
using namespace std;
class Score
{
private:
	string number;
	string name;
	int clanguage;
	int datastructure;
	int java;
	int network;
	int composition;
	int algorithm;
	int project;
public:
	Score(){}
	~Score(){
		cout << "Score Object is being deleted" << endl;
	}
	void setNumber(string Number)
	{
		number=Number;
	}
	string getNumber()
	{
		return number;
	}
	void setName(string Name)
	{
		name=Name;
	}
	string getName()
	{
		return name;
	}
	void setClanguage(int Clanguage)
	{
		clanguage=Clanguage;
	}
	int getClanguage()
	{
		return clanguage;
	}
	void setDatastructure(int Datastructure)
	{
		datastructure=Datastructure;
	}
	int getDatastructure()
	{
		return datastructure;
	}
	void setJava(int Java)
	{
		java=Java;
	}
	int getJava()
	{
		return java;
	}
	void setNetwork(int Network)
	{
		network=Network;
	}
	int getNetwork()
	{
		return network;
	}
	void setComposition(int Composition)
	{
		composition=Composition;
	}
	int getComposition()
	{
		return composition;
	}
	void setAlgorithm(int Algorithm)
	{
		algorithm=Algorithm;
	}
	int getAlgorithm()
	{
		return algorithm;
	}
	void setProject(int Project)
	{
		project=Project;
	}
	int getProject()
	{
		return project;
	}
	int getSum()
	{
		return clanguage+datastructure+java+network+composition+algorithm+project;
	}
};
class ScoreManager{
private:
	Score score[100];//定义存储Score类的数组 
	int sum;
	int Select();
	int SearchByNumber(string);
	int SearchByName(string);
	void SortByNumber(); 
	void SortByClanguage();
	void SortByDatastructure();
	void SortByJava();
	void SortByNetwork();
	void SortByComposition();
	void SortByAlgorithm();
	void SortByProject();
	void SortBySum();
	float getAverage();
public:
	ScoreManager(){sum=0;}
	~ScoreManager(){
	cout << "ScoreManager Object is being deleted" << endl;
	}
	void Add();
	void Delete();
	void Update();
	void Search();
	void ShowAll();
	void Sort();
	void Average();
};
int ScoreManager::Select()
{
	cout<<"请选择查找方式:"<<endl;
	cout<<"1、学号"<<endl;
	cout<<"2、姓名"<<endl;
	int n,i;
	string str;
	cin>>n;
	switch(n)
	{
	case 1:
		cout<<"请输入学号:";
		cin>>str;
		i=SearchByNumber(str);
		break;
	case 2:
		cout<<"请输入姓名:";
		cin>>str;
		i=SearchByName(str);
	}
	return i;
}
int ScoreManager::SearchByNumber(string number)
{
	int i;
	for(i=0;i<sum;++i)
	{
		if(score[i].getNumber()==number)
			break;
	}
	if(i==sum)
		return -1;
	return i;
}
int ScoreManager::SearchByName(string name)
{
	int i;
	for(i=0;i<sum;++i)
	{
		if(score[i].getName()==name)
			break;
	}
	if(i==sum)
		return -1;
	return i;
}

void ScoreManager::SortByNumber()//按学号排序
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getNumber()>score[j+1].getNumber())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}

void ScoreManager::SortByClanguage()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getClanguage()<score[j+1].getClanguage())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
void ScoreManager::SortByDatastructure()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getDatastructure()<score[j+1].getDatastructure())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}	
	ShowAll();
}
void ScoreManager::SortByJava()
{
	cout<<sum<<endl; 
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getJava()<score[j+1].getJava())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}	
	ShowAll();
}
void ScoreManager::SortByNetwork()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getNetwork()<score[j+1].getNetwork())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
void ScoreManager::SortByComposition()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getComposition()<score[j+1].getComposition())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
void ScoreManager::SortByAlgorithm()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getAlgorithm()<score[j+1].getAlgorithm())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
void ScoreManager::SortByProject()
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getProject()<score[j+1].getProject())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
void ScoreManager::SortBySum()//按总分
{
	int i,j;
	Score temp;
	for(i=0;i<sum;i++)
	{
		for(j=0;j<sum-1-i;j++)
		{
			if(score[j].getSum()<score[j+1].getSum())
			{
				temp=score[j];
				score[j]=score[j+1];
				score[j+1]=temp;
			}
		}
	}
	ShowAll();
}
float ScoreManager::getAverage()
{
	int i,s;
	for(s=i=0;i<sum;++i)
		s+=score[i].getSum();
	return s/(float)sum;
}
void ScoreManager::Add()
{
	Score s;
	string number;
	string name;
	int clanguage;
	int datastructure;
	int java;
	int network;
	int composition;
	int algorithm;
	int project;
	cout<<"请输入学号:";
	cin>>number;
	s.setNumber(number);
	cout<<"请输入姓名:";
	cin>>name;
	s.setName(name);
	
	cout<<"请输入C语言:";
	cin>>clanguage;
	if(clanguage>100||clanguage<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setClanguage(clanguage);
	
	cout<<"请输入数据结构:";
	cin>>datastructure;
	if(datastructure>100||datastructure<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setDatastructure(datastructure);
	
	cout<<"请输入java:";
	cin>>java;
	if(java>100||java<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setJava(java);
	
	cout<<"请输入计算机网络:";
	cin>>network;
	if(network>100||network<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setNetwork(network);
	
		cout<<"请输入计算机组成原理:";
	cin>>composition;
	if(composition>100||composition<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setComposition(composition);
	
	cout<<"请输入算法分析:";
	cin>>algorithm;
	if(algorithm>100||algorithm<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setAlgorithm(algorithm);
	
	cout<<"请输入项目管理:";
	cin>>project;
	if(project>100||project<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setProject(project);
	
	
	score[sum]=s;//存储到私有成员变量 
	sum++;
	cout<<"添加成功"<<endl;
}
void ScoreManager::Delete()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"学生不存在"<<endl;
		return;
	}
	for(i++;i<sum;i++)
		score[i-1]=score[i];
	sum--;
	cout<<"删除成功"<<endl;
}
void ScoreManager::Update()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"学生不存在"<<endl;
		return;
	}
	Score s;
		string number;
	string name;
	int clanguage;
	int datastructure;
	int java;
	int network;
	int composition;
	int algorithm;
	int project;
	cout<<"请输入学号:";
	cin>>number;
	s.setNumber(number);
	cout<<"请输入姓名:";
	cin>>name;
	s.setName(name);
	
	cout<<"请输入C语言:";
	cin>>clanguage;
	if(clanguage>100||clanguage<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setClanguage(clanguage);
	
	cout<<"请输入数据结构:";
	cin>>datastructure;
	if(datastructure>100||datastructure<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setDatastructure(datastructure);
	
	cout<<"请输入java:";
	cin>>java;
	if(java>100||java<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setJava(java);
	
	cout<<"请输入计算机网络:";
	cin>>network;
	if(network>100||network<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setNetwork(network);
	
		cout<<"请输入计算机组成原理:";
	cin>>composition;
	if(composition>100||composition<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setComposition(composition);
	
	cout<<"请输入算法分析:";
	cin>>algorithm;
	if(algorithm>100||algorithm<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setAlgorithm(algorithm);
	
	cout<<"请输入项目管理:";
	cin>>project;
	if(project>100||project<0)
	{
		cout<<"输入有误"<<endl;
		return;
	}
	s.setProject(project);
	score[i]=s;
	cout<<"修改成功"<<endl;
}
void ScoreManager::Search()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"学生不存在"<<endl;
		return;
	}
	cout<<score[i].getNumber()<<" "<<score[i].getName()<<" "<<score[i].getClanguage()<<" "<<score[i].getDatastructure()<<" "<<score[i].getJava()<<" "<<score[i].getNetwork()<<" "<<score[i].getComposition()<<" "<<score[i].getAlgorithm()<<" "<<score[i].getProject()<<endl;
}
void ScoreManager::ShowAll()
{
	int i;
	cout<<"学号  姓名  C语言  数据结构  Java  计算机网络  计算机组成原理  算法分析  项目管理  总分  排名"<<endl;
	for(i=0;i<sum;++i)
	cout<<score[i].getNumber()<<"   "<<score[i].getName()<<"     "<<score[i].getClanguage()<<"      "<<score[i].getDatastructure()<<"      "<<score[i].getJava()<<"       "<<score[i].getNetwork()<<"            "<<score[i].getComposition()<<"           "<<score[i].getAlgorithm()<<"         "<<score[i].getProject()<<"    "<<score[i].getSum()<<"    "<<i+1<<endl;
}
void ScoreManager::Sort()
{
	cout<<"请选择排序方式:"<<endl;
	cout<<"1、学号"<<endl;
	cout<<"2、C语言"<<endl;
	cout<<"3、数据结构"<<endl;
	cout<<"4、Java"<<endl;
	cout<<"5、计算机网络"<<endl;
	cout<<"6、计算机组成原理"<<endl;
	cout<<"7、算法分析"<<endl;
	cout<<"8、项目管理"<<endl;
	cout<<"9、总分"<<endl;
	int n;
	cin>>n;
	switch(n)
	{
	case 1:
		SortByNumber();
		break;
	case 2:
		SortByClanguage();
		break;
	case 3:
		SortByDatastructure();
		break;		
	case 4:
		SortByJava();
		break;
	case 5:
		SortByNetwork();
		break;
	case 6:
		SortByComposition();
		break;
	case 7:
		SortByAlgorithm();
		break;		
	case 8:
		SortByProject();
		break;
	case 9:
		SortBySum();
		break;
	}
	cout<<"排序完成"<<endl;
}
void ScoreManager::Average()
{
	cout<<"平均成绩:"<<getAverage()<<endl;
}

void menu()
{
	system("cls");
	cout<<"=========西南科技大学软件工程成绩分科排行系统========"<<endl;
	cout<<"==============输入对应数字进行操作==================="<<endl;
	cout<<"                1、添加                              "<<endl;
	cout<<"                2、删除                              "<<endl;
	cout<<"                3、修改                              "<<endl;
	cout<<"                4、查询                              "<<endl;
	cout<<"                5、列表                              "<<endl;
	cout<<"                6、排序                              "<<endl;
	cout<<"                7、平均分                            "<<endl;
	cout<<"=================分割线=============================="<<endl;
}

int main()
{
	
	ScoreManager m;
	int n;
	while(1)//无限循环
	{
		menu();
		cin>>n;
		switch(n)
		{
		case 1:
			m.Add();
			break;
		case 2:
			m.Delete();
			break;
		case 3:
			m.Update();
			break;
		case 4:
			m.Search();
			break;
		case 5:
			m.ShowAll();
			break;
		case 6:
			m.Sort();
			break;
		case 7:
			m.Average();
			break;
		default :
			{
				cout<<"输入错误"<<endl;
			}
		}
		system("pause");
	}
}

