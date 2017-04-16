#include<iostream>
#include<string.h> 
using namespace std; 

class String
{
public:
	String(const char* p);
	String(const String& s);
	void display();
	int getlen();
	void deleStr();//�ͷ�ָ�� 
private:
	int len;
	char* Str;
};

String::String(const char* p)
{
	len = strlen(p);
	Str = new char[len+1];
	strcpy(Str,p);
}
String::String(const String& s)
{//���ƹ��캯�� 
	len=s.len;
	Str=new char[len+1];
	Str=(s.Str);
}
int String::getlen()
{
	return len;
}
void String::display()
{
		cout<<Str;
	cout<<endl;
}
void String::deleStr()
{
	delete[]Str;
}

int main()
{
	String a("This is a test!");
	String b(a);
	a.display();
	b.display();
	a.deleStr();
	b.deleStr();	
}
