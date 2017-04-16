#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m;
		cin>>m;
		if(m%8==0||(m*m)%8==0)
		cout<<"Lucky number!"<<endl;
		else
		cout<<"What a pity!"<<endl; 
	}
 } 
