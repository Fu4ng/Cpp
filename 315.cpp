#include<iostream>
using namespace std;
float get_aver(int *p)
{//����ƽʱƽ����
	float sum=0;
	int i=0;
	while(i<5)
	{
		sum+=*p+i;
		i++ ;
	}
	return sum/5; 
}
float get_score3(float a,float b)
{
	int c =0.3*a+0.7*b;
	return c;
}
class Course{
	public:
	char course_name[10];
	int score1[5];      //ƽʱ��
	float average;  
	float score2;      //��ĩ�ɼ�
	float score3;       //�ۺϳɼ� 
 };
 
 class Student:public Course{
 	public:
 	int num;
 	char name[10];
 	char course[10];
 	
}; 
int main()
{	Student stu;
	cout<<"������ѧ������"<<endl;
	cin>>stu.name;
	cout<<"������ѧ��ѧ��"<<endl;
	cin>>stu.num;
	cout<<"������ѧ����ѡ�γ�"<<endl;
	cin>>stu.course;
	cout<<"���������ƽʱ��"<<endl;
	cout<<"_____________"<<endl; 
	int i =1;
	while(i<6)
	{
		cout<<"��"<<i<<"�γ���ƽʱ��"<<endl;
		cin>>stu.score1[i-1];
		i++; 
	}
	stu.average=get_aver(stu.score1);
	cout<<"��������ĩ�ɼ�"<<endl;
	cin>>stu.score2; 
	stu.score3=get_score3(stu.average,stu.score2);
	cout<<"stu.name"<<"�ۺϳɼ�Ϊ"<<stu.score3<<endl; 
	
}
