#include<iostream>
using namespace std;
int main()
{
	int i,j,n=0,l,r;
	while(cin>>n)
	{	int a[1000]={0,1};
		for(i=1;i<=n;i++)
		{	
			l=0;
			for(int j=1;j<=i;j++)
			{
				r=a[j];
				a[j]=r+l;
				l=r;
				if(j==1) cout<<a[j];
				else cout<<" "<<a[j];
				
			}
			cout<<endl; 
		}
		cout<<endl;
	}
	
 } 
