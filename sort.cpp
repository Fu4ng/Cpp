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
{
	for(int a= 1;a<n;a++)
	{
		for(int b=a ; b>0 ;b--)
		{
		if(arr[b]>arr[b-1]) swap(arr[b],arr[b-1]);
		}
	}
 } 
 void Selectionsorting(int arr[],int n)
 {
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
 {
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
int main()
{
	int arr[5]={1,3,5,4,2}; 
	//Bubblesorting(arr,5);
	//Insetsorting(arr,5);
	//Selectionsorting(arr,5);
	Shellsorting(arr,5);
	for(int i =0;i<5;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
 } 
