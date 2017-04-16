#include<iostream>
using namespace std;
class CIArrar{
	int *p; 
public:
	CIArrar();
	CIArrar(int n);
	void Change(int m);
	void remove();//delete[]; 
	void display(int n);//输出函数
	void input(int n);//输入 
}; 
CIArrar::CIArrar()
{ 	

	p=0;

}
CIArrar::CIArrar(int n)
{ 	

	p=new int[n];

}
void CIArrar:: Change(int m)
{
	delete[]p;
	p=new int[m];

}
void CIArrar:: remove()
{ 
	//释放 
	delete[]p;
}
void CIArrar::display(int n)
{
	//显示数组中的数 
	for(int i=0;i<n;i++)
	cout<<p[i]<<" ";
	cout<<endl;
}
void CIArrar::input(int n)
{	//输入 
	for(int i=0;i<n;i++)
	scanf("%d",& *p+i) ;
}
int main()
{	int n,m;
	cin>>n;
	CIArrar a(n);
	a.input(n);
	a.display(n);
	cout<<"输入更改的数组大小"<<endl;
	cin>>m;
	cout<<"输入更改的值"<<endl;
	a.input(m);
	cout<<"更改之后"<<endl; 
	a.Change(m);
	a.display(m);
	a.remove();
	return 0;
}
