#include<iostream>
using namespace std;
float get_aver(int *p)
{//计算平时平均分
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
	int score1[5];      //平时分
	float average;  
	float score2;      //期末成绩
	float score3;       //综合成绩 
 };
 
 class Student:public Course{
 	public:
 	int num;
 	char name[10];
 	char course[10];
 	
}; 
int main()
{	Student stu;
	cout<<"请输入学生姓名"<<endl;
	cin>>stu.name;
	cout<<"请输入学生学号"<<endl;
	cin>>stu.num;
	cout<<"请输入学生所选课程"<<endl;
	cin>>stu.course;
	cout<<"请输入五次平时分"<<endl;
	cout<<"_____________"<<endl; 
	int i =1;
	while(i<6)
	{
		cout<<"第"<<i<<"次出勤平时分"<<endl;
		cin>>stu.score1[i-1];
		i++; 
	}
	stu.average=get_aver(stu.score1);
	cout<<"请输入期末成绩"<<endl;
	cin>>stu.score2; 
	stu.score3=get_score3(stu.average,stu.score2);
	cout<<"stu.name"<<"综合成绩为"<<stu.score3<<endl; 
	
}
