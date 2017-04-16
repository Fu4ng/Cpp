#include<iostream>
using namespace std;
int main()
{	
	int a,b;
	while(cin>>a>>b)
	{	
			int flag =0;
			int c=0;
		for(int a1=a,b1=b;a1<=b1;a1++)
		{	
			
			int a2=a1/100;
			int a3=(a1-a2*100)/10;
			int a4=a1%10;
			if(a1==(a2*a2*a2+a3*a3*a3+a4*a4*a4))
			{	 c++;
				flag++;
				if(c>1) cout<<" "; 
				cout<<a1;
			}

		 } 
		 		if(flag==0) cout<<"no"<<endl;
				else cout<<endl; 
	}
	return 0;
 } 
