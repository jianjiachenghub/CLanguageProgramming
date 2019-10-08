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
	Score score[100];//����洢Score������� 
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
	cout<<"��ѡ����ҷ�ʽ:"<<endl;
	cout<<"1��ѧ��"<<endl;
	cout<<"2������"<<endl;
	int n,i;
	string str;
	cin>>n;
	switch(n)
	{
	case 1:
		cout<<"������ѧ��:";
		cin>>str;
		i=SearchByNumber(str);
		break;
	case 2:
		cout<<"����������:";
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

void ScoreManager::SortByNumber()//��ѧ������
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
void ScoreManager::SortBySum()//���ܷ�
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
	cout<<"������ѧ��:";
	cin>>number;
	s.setNumber(number);
	cout<<"����������:";
	cin>>name;
	s.setName(name);
	
	cout<<"������C����:";
	cin>>clanguage;
	if(clanguage>100||clanguage<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setClanguage(clanguage);
	
	cout<<"���������ݽṹ:";
	cin>>datastructure;
	if(datastructure>100||datastructure<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setDatastructure(datastructure);
	
	cout<<"������java:";
	cin>>java;
	if(java>100||java<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setJava(java);
	
	cout<<"��������������:";
	cin>>network;
	if(network>100||network<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setNetwork(network);
	
		cout<<"�������������ԭ��:";
	cin>>composition;
	if(composition>100||composition<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setComposition(composition);
	
	cout<<"�������㷨����:";
	cin>>algorithm;
	if(algorithm>100||algorithm<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setAlgorithm(algorithm);
	
	cout<<"��������Ŀ����:";
	cin>>project;
	if(project>100||project<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setProject(project);
	
	
	score[sum]=s;//�洢��˽�г�Ա���� 
	sum++;
	cout<<"��ӳɹ�"<<endl;
}
void ScoreManager::Delete()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"ѧ��������"<<endl;
		return;
	}
	for(i++;i<sum;i++)
		score[i-1]=score[i];
	sum--;
	cout<<"ɾ���ɹ�"<<endl;
}
void ScoreManager::Update()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"ѧ��������"<<endl;
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
	cout<<"������ѧ��:";
	cin>>number;
	s.setNumber(number);
	cout<<"����������:";
	cin>>name;
	s.setName(name);
	
	cout<<"������C����:";
	cin>>clanguage;
	if(clanguage>100||clanguage<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setClanguage(clanguage);
	
	cout<<"���������ݽṹ:";
	cin>>datastructure;
	if(datastructure>100||datastructure<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setDatastructure(datastructure);
	
	cout<<"������java:";
	cin>>java;
	if(java>100||java<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setJava(java);
	
	cout<<"��������������:";
	cin>>network;
	if(network>100||network<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setNetwork(network);
	
		cout<<"�������������ԭ��:";
	cin>>composition;
	if(composition>100||composition<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setComposition(composition);
	
	cout<<"�������㷨����:";
	cin>>algorithm;
	if(algorithm>100||algorithm<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setAlgorithm(algorithm);
	
	cout<<"��������Ŀ����:";
	cin>>project;
	if(project>100||project<0)
	{
		cout<<"��������"<<endl;
		return;
	}
	s.setProject(project);
	score[i]=s;
	cout<<"�޸ĳɹ�"<<endl;
}
void ScoreManager::Search()
{
	int i=Select();
	if(i==-1)
	{
		cout<<"ѧ��������"<<endl;
		return;
	}
	cout<<score[i].getNumber()<<" "<<score[i].getName()<<" "<<score[i].getClanguage()<<" "<<score[i].getDatastructure()<<" "<<score[i].getJava()<<" "<<score[i].getNetwork()<<" "<<score[i].getComposition()<<" "<<score[i].getAlgorithm()<<" "<<score[i].getProject()<<endl;
}
void ScoreManager::ShowAll()
{
	int i;
	cout<<"ѧ��  ����  C����  ���ݽṹ  Java  ���������  ��������ԭ��  �㷨����  ��Ŀ����  �ܷ�  ����"<<endl;
	for(i=0;i<sum;++i)
	cout<<score[i].getNumber()<<"   "<<score[i].getName()<<"     "<<score[i].getClanguage()<<"      "<<score[i].getDatastructure()<<"      "<<score[i].getJava()<<"       "<<score[i].getNetwork()<<"            "<<score[i].getComposition()<<"           "<<score[i].getAlgorithm()<<"         "<<score[i].getProject()<<"    "<<score[i].getSum()<<"    "<<i+1<<endl;
}
void ScoreManager::Sort()
{
	cout<<"��ѡ������ʽ:"<<endl;
	cout<<"1��ѧ��"<<endl;
	cout<<"2��C����"<<endl;
	cout<<"3�����ݽṹ"<<endl;
	cout<<"4��Java"<<endl;
	cout<<"5�����������"<<endl;
	cout<<"6����������ԭ��"<<endl;
	cout<<"7���㷨����"<<endl;
	cout<<"8����Ŀ����"<<endl;
	cout<<"9���ܷ�"<<endl;
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
	cout<<"�������"<<endl;
}
void ScoreManager::Average()
{
	cout<<"ƽ���ɼ�:"<<getAverage()<<endl;
}

void menu()
{
	system("cls");
	cout<<"=========���ϿƼ���ѧ������̳ɼ��ֿ�����ϵͳ========"<<endl;
	cout<<"==============�����Ӧ���ֽ��в���==================="<<endl;
	cout<<"                1�����                              "<<endl;
	cout<<"                2��ɾ��                              "<<endl;
	cout<<"                3���޸�                              "<<endl;
	cout<<"                4����ѯ                              "<<endl;
	cout<<"                5���б�                              "<<endl;
	cout<<"                6������                              "<<endl;
	cout<<"                7��ƽ����                            "<<endl;
	cout<<"=================�ָ���=============================="<<endl;
}

int main()
{
	
	ScoreManager m;
	int n;
	while(1)//����ѭ��
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
				cout<<"�������"<<endl;
			}
		}
		system("pause");
	}
}

