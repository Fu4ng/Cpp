#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		char c;
		cin>>c;
		int a,b;
		cin>>a>>b; 
		if(c=='+') {
		 cout<<a+b<<endl;
		}
		else if(c=='-'){
			cout<<a-b<<endl;
		}
		else if(c=='*') {
			 cout<<a*b<<endl;
		}
		else if(c=='/'){ 
			double a1 =a*0.01;
			double b1 = b*0.01;
			if((int)(a1/b1)==a1/b1) cout<<a/b<<endl;
			else
 			printf("%.2f\n",a1/b1);
	}
			
	}
	return 0;
}
