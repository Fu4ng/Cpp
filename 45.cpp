#include<iostream>
using namespace std;
class CIArrar{
	int *p; 
public:
	CIArrar();
	CIArrar(int n);
	void Change(int m);
	void remove();//delete[]; 
	void display(int n);//�������
	void input(int n);//���� 
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
	//�ͷ� 
	delete[]p;
}
void CIArrar::display(int n)
{
	//��ʾ�����е��� 
	for(int i=0;i<n;i++)
	cout<<p[i]<<" ";
	cout<<endl;
}
void CIArrar::input(int n)
{	//���� 
	for(int i=0;i<n;i++)
	scanf("%d",& *p+i) ;
}
int main()
{	int n,m;
	cin>>n;
	CIArrar a(n);
	a.input(n);
	a.display(n);
	cout<<"������ĵ������С"<<endl;
	cin>>m;
	cout<<"������ĵ�ֵ"<<endl;
	a.input(m);
	cout<<"����֮��"<<endl; 
	a.Change(m);
	a.display(m);
	a.remove();
	return 0;
}
