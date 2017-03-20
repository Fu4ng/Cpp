#include<iostream>
using namespace std;
int main()
{	int n;
	cin>>n;
	int arr[101][101];
	int i,j,k,q,w;
	i=-1;
	j=n-1;
	k=1;
	q=0;

	//down
	while(q<n*n)
{
	
	for(i+1;i<n-k;i++,q++)
	{
		arr[i][j]=q;
		if(q>n*n+1)
		 {
		 	j=n*n;
		 	i=j;
		 }
	}
	//left
	for(i-1;j>k-1;j--,q++)
	{	
		arr[i][j]=q;
		if(q>n*n)
		 {
		 	j=n*n;
		 	i=j;
		 }
	}
	//up
	for(j+1;i>k-1;i--,q++)
	{
		arr[i][j]=q;
		if(q>n*n)
		 {
		 	j=n*n;
		 	i=j;
		 }
	}
	k++;
	//right
	for(i+1;j<n-k;j++,q++)
	{
		arr[i][j]=q;
		if(q>n*n)
		 {
		 	j=n*n;
		 	i=j;
		 }
	}

	
}
	if(n%2==1)
	{
		w=(n+1)/2;
		arr[w-1][w-1]=n*n;
	}
	else
		arr[n/2-1][n/2-1]=n*n;
	
	//Êä³ö
	for(int a=0;a<n;a++)
	{
		for(int b=0;b<n;b++)
		{
			cout<<arr[a][b]<<" ";	
		}
		cout<<endl;
	}
	
}
