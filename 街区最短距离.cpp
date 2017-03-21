#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int sel(int x[],int m)
{
	int a,b,temp=50000;
	for(a=1;a<100;a++)
		{ 
			int c,sum=0;
			for(c=1;c<=m;c++)
			{	
				int d=(x[c]-a);
				sum+=sqrt(d*d);
			}
			if(sum<temp) 
			{
				temp=sum;
			}
			
		}
		return temp;		
}
int main()
{
	int n,m;
	cin>>n;
	while(n--&&cin>>m)
	{	
		int x[25],y[25],a,b;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		int i=1;
		for(;i<=m;i++) cin>>x[i]>>y[i];
		int fx=sel(x,m);
		int fy=sel(y,m);
		cout<<fx+fy<<endl;	
	}
	return 0;
}
