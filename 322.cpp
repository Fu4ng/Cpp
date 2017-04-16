/*
建立Time类，要求的功能包括：设置时间（通过函数设置和从键盘数据两种方式）、
显示时间、时间增加（增加的时间单位为秒）、时间减少（减少的单位为秒）。请
注意时间增加减少时，时分秒的自动增减。
*/ 
#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		int min;
		int sec;
	public:
		int setTime(int h,int m,int s);
		int showTime();
		int addTime(int delat);
		int subTime(int delat);
};

int Time::setTime(int h,int m,int s)
{
	hour=h;
	min=m;
	sec=s;
}
int Time::showTime()
{
	cout<<hour<<"时"<<min<<"分"<<sec<<"秒"<<endl; 
}
int Time::addTime(int delat)
{ 	
	int old=min*60+sec;
	min=0;sec=0;
	delat+=old;
	int delat_hour=delat/3600;
	int delat_min=(delat-delat_hour*3600)/60;
	hour+=delat_hour;
	min+=delat_min;
	sec+=(delat%60);
}
int Time::subTime(int delat)
{
	int sum=hour*3600+min*60+sec;
	sum-=delat;
	hour=sum/3600;
	min=(sum-hour*3600)/60;
	sec=sum%60;
}
int main()
{	
	Time t;
	//键盘输入 
	int h,m,s,add_delat,sub_delat;
	cout<<"输入时间：	xx时xx分xx秒"<<endl; 
	cin>>h>>m>>s;
	t.setTime(h,m,s);
	cout<<"输入要增加的时间，单位为秒"<<endl;
	cin>>add_delat; 
	t.addTime(add_delat);
	cout<<"现在的时间为:";
	t.showTime();
	cout<<"输入要减少的时间，单位为秒"<<endl;
	cin>>sub_delat;
	t.subTime(sub_delat);
	cout<<"现在的时间为:";
	t.showTime();
	
	return 0;		
}
