#include<iostream>
using namespace std;
int judge(int *p,int n)
{	int i,j;
	
	for(i=0,j=0;i<n-1;i++)
	{
		if(*(p+i)==*(p+i+1)) 
		{
			j++;
		}
		if(j==n-2) return 0;
		else return 1;
	}
}
int main()
{
	int n,flag,n_s;
	while(cin>>n&&n!=0)
	{	
		int flag=0;
		n_s=n;
		int *p=new int[n_s];
		for(int i =0;i<n_s;i++)
		{
			cin>>*(p+i);
			if(*(p+i)%2==1) *(p+i)+1; 
		}
		while(judge(p,n_s))
		{	flag+1;
			int *q=new int [n_s];
			for(int i=0;i<n_s;i++)
			{
				*(q+i)=(*(p+i))/2;
			}
			for(int i=0;i<n_s;i++)
			{
				if(i==n_s-1) 
				{
					*p=(*p)/2+*(q+i);
					if((*p)%2!=0) *p+1;
				}
				else
				{
					*(p+i+1)=(*(p+i+1))/2+*(q+i);
					if(*(p+i+1)%2!=0) *(p+i+1)+1;
				}
				for(int i=0;i<n_s;i++) *(q+i)=0;
			}
			
		}
		cout<<flag<<" "<<*p<<endl;
		for(int i=0;i<n_s;i++) *(p+i)=0;
	}

	return 0;
}
