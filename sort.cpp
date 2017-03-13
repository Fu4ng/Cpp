//用几种不同的排序算法，使数组从大到小 
#include<iostream>
using namespace std;
void swap(int *a ,int *b)
{ 
	int temp = *a;
	*a= *b;
	*b=temp;

}
 
void Bubblesorting(int arr[],int n)
{ 	//冒泡排序 
	for(int a=0;a<n-1;a++)
	{
		for(int b=n-1;b>a;b--)
		{
			if(arr[b]>arr[b-1]) swap(arr[b-1],arr[b]);
		 } 
	}
}

void Insetsorting(int arr[],int n)
{	//插入排序 
	for(int a= 1;a<n;a++)
	{
		for(int b=a ; b>0 ;b--)
		{
		if(arr[b]>arr[b-1]) swap(arr[b],arr[b-1]);
		}
	}
 } 
 void Selectionsorting(int arr[],int n)
 {	//选择排序 
 	for(int a =0;a<n;a++)
 	{
 		int bigest = a;
 		for(int b = a+1;b<n;b++)
 		{
 			if(arr[bigest]<arr[b])
 			swap(arr[bigest],arr[b]);
		}
		 cout<<arr[bigest]<<",";//输出最大值 
	 }
 }
 
 void Shellsorting (int arr[],int n)
 {	//希尔排序 
 	for(int delta=n/2;delta>0;delta/=2)
 	{	//delta 为步长
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
{	//快速排序 
	if(left>right)
	return ;
	int a,b;
	a=left;
	b=right;
	int key = arr[left];//key 为基准数
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
	 //递归部分
	 Quicksorting(arr,left,a-1);
	 Quicksorting(arr,a+1,right); 
 } 
 void MemeryArray(int *arr,int first,int mid,int last )
{	//归并算法—分解部分
	//将数组分解成两个临时数组
	int numOfTemp1 = mid - first+1;
	int numOfTemp2 = last -mid;
	int *Temp1 =new int [numOfTemp1+1];
	int *Temp2 =new int [numOfTemp2+1];
	int i =0 , j=0 ,k=0;
	while(i<numOfTemp1)
	{
		Temp1[i]=arr[first+i];
		i++;
	}
	while(j<numOfTemp2) 
	{
		Temp2[j]=arr[mid+j+1];
		j++;
	}
	
	Temp1[numOfTemp1]=10000;
	Temp2[numOfTemp2]=10000;
	//归并算法—合并部分
	for(i=0,j=0,k=first;k<=last;k++)
	{
		if(Temp1[i]<=Temp2[j])
		{
			arr[k]=Temp1[i];
			i++;
		}
		else
		{
			arr[k]=Temp2[j];
			j++;
		}
	}
	delete[]Temp1;             //重置指针
	delete[]Temp2; 
	
	
}
void Mergesorting(int *arr,int first,int last)
{
	if(first<last)
	{
		int mid =(first+last)/2;
		Mergesorting(arr,first,mid);
		Mergesorting(arr,mid+1,last);
		MemeryArray(arr,first,mid,last);
	}
}
int main()
{
	int arr[5]={1,3,5,4,2}; 
	//Bubblesorting(arr,5);
	//Insetsorting(arr,5);
	//Selectionsorting(arr,5);
	//Quicksorting(arr,0,4);
	Mergesorting(arr,0,4);
	for(int i =0;i<5;i++)
	{
		cout<<arr[i]<<",";
	}
	return 0;
 } 
