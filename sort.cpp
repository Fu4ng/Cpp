//�ü��ֲ�ͬ�������㷨��ʹ����Ӵ�С 
#include<iostream>
using namespace std;
void swap(int *a ,int *b)
{ 
	int temp = *a;
	*a= *b;
	*b=temp;

}
 
void Bubblesorting(int arr[],int n)
{ 	//ð������ 
	for(int a=0;a<n-1;a++)
	{
		for(int b=n-1;b>a;b--)
		{
			if(arr[b]>arr[b-1]) swap(arr[b-1],arr[b]);
		 } 
	}
}

void Insetsorting(int arr[],int n)
{	//�������� 
	for(int a= 1;a<n;a++)
	{
		for(int b=a ; b>0 ;b--)
		{
		if(arr[b]>arr[b-1]) swap(arr[b],arr[b-1]);
		}
	}
 } 
 void Selectionsorting(int arr[],int n)
 {	//ѡ������ 
 	for(int a =0;a<n;a++)
 	{
 		int bigest = a;
 		for(int b = a+1;b<n;b++)
 		{
 			if(arr[bigest]<arr[b])
 			swap(arr[bigest],arr[b]);
		}
		 cout<<arr[bigest]<<",";//������ֵ 
	 }
 }
 
 void Shellsorting (int arr[],int n)
 {	//ϣ������ 
 	for(int delta=n/2;delta>0;delta/=2)
 	{	//delta Ϊ����
	 	for(int a =delta;a<n;a++)
	 	{
	 		for(int b=a-delta;b>=0;b-=delta)
	 		{	if(arr[b]<arr[b+delta])
	 			swap(arr[b],arr[b+delta]);
	 		}
		}
		 
	
	 }
}

void Quicksorting(int arr[],int left,int right)
{	//�������� 
	if(left>right)
	return ;
	int a,b;
	a=left;
	b=right;
	int key = arr[left];//key Ϊ��׼��
	while(a!=b) 
	{
		while(a<b&&arr[b]<key)
			b--;
		while(a<b&& arr[a]>key)
			a++;
		if(a<b)
			swap(arr[a],arr[b]);
			 
	 } 
	 arr[a]=key;
	 //�ݹ鲿��
	 Quicksorting(arr,left,a-1);
	 Quicksorting(arr,a+1,right); 
 } 
int main()
{
	int arr[5]={1,3,5,4,2}; 
	//Bubblesorting(arr,5);
	//Insetsorting(arr,5);
	//Selectionsorting(arr,5);
	Quicksorting(arr,0,4);
	for(int i =0;i<5;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
 } 
