/*
����Time�࣬Ҫ��Ĺ��ܰ���������ʱ�䣨ͨ���������úʹӼ����������ַ�ʽ����
��ʾʱ�䡢ʱ�����ӣ����ӵ�ʱ�䵥λΪ�룩��ʱ����٣����ٵĵ�λΪ�룩����
ע��ʱ�����Ӽ���ʱ��ʱ������Զ�������
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
	cout<<hour<<"ʱ"<<min<<"��"<<sec<<"��"<<endl; 
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
	//�������� 
	int h,m,s,add_delat,sub_delat;
	cout<<"����ʱ�䣺	xxʱxx��xx��"<<endl; 
	cin>>h>>m>>s;
	t.setTime(h,m,s);
	cout<<"����Ҫ���ӵ�ʱ�䣬��λΪ��"<<endl;
	cin>>add_delat; 
	t.addTime(add_delat);
	cout<<"���ڵ�ʱ��Ϊ:";
	t.showTime();
	cout<<"����Ҫ���ٵ�ʱ�䣬��λΪ��"<<endl;
	cin>>sub_delat;
	t.subTime(sub_delat);
	cout<<"���ڵ�ʱ��Ϊ:";
	t.showTime();
	
	return 0;		
}
