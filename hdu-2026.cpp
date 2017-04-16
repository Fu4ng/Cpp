#include<iostream>
using namespace std;
int main()
{
	char a[100];
	while(gets(a))
	{
		int i=0;
		for(;a[i]!=0;i++)
		{
			if(a[i]>='a'&&a[i]<='z'&&i==0)
			a[i]-=32;
			if(a[i]>='a'&&a[i]<='z'&&a[i-1]==' ')
			{
				a[i]-=32;
			}
			
		}
		puts(a);
	}
 } 
