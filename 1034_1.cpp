#include<iostream>
using namespace std;
int judge(int p[],int n)
{	int i,j;
	for( i=0,j=0;i<n;i++)
	{
		if(p[0]==p[i]) j++;
	}
	if (j==n) return 0;
	else return 1;
}
int main()
{
	int n,flag,n_s;

	while(cin>>n)
	{
		if(n==0) break;
			
		int flag=0;
		n_s=n;
		int p[100];
		p[100]={0};
		for(int i =0;i<n_s;i++)
		{
			cin>>p[i];
			if(p[i]%2==1) p[i]++; //输入的都是偶数 
		}
		while(judge(p,n_s))
		{	flag++;
			int q[100];
			q[100]={0};
			for(int i=0;i<n_s;i++)
			{
				q[i]=(p[i])/2;
		
			}
			for(int i=0;i<n_s;i++)
			{
				if(i==n_s-1) 
				{
					p[0]=p[0]/2+q[i];
					if(p[0]%2!=0) p[0]++;
				}
				else
				{
					p[i+1]=(p[i+1])/2+q[i];
					if(p[i+1]%2!=0) p[i+1]++;
				}
		}
			
			
			}
			

		cout<<flag<<" "<<p[0]<<endl;
	}

	return 0;
}
