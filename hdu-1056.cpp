#include<iostream>
using namespace std;
int main()
{
	double m;
	while(cin>>m&&m!=0)
	{	
		int n=1 ;
		double len =1/2;
		while(len<m)
		{	
			n++;
			len = len+ 1.00/n;
		}

		cout<<n-1<<" card(s)"<<endl; 
	 } 
	 return 0;
 } 
