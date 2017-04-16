#include<iostream>
using namespace std;

//二分查找法！！
int Binart_Search(int a[],int v,int p,int r)
{
    int j;
    j=(r+p)/2;
    if(p>=r)
        return j;
    else
    {
        if(v<a[j])
            return Binart_Search(a,v,p,j);
        else
            return Binart_Search(a,v,j+1,r);
    }
}

void New_Insertion_Sort(int a[],int n)//新插入排序，  插入时使用二分查找找到元素再进行插入元素！
{
    int i,k,key,j;
    for(i=1;i<n;i++)
    {
        key=a[i];
        k=Binart_Search(a, key, 0, i);
        for(j=i;j>k;j--)
        {
            a[j]=a[j-1];
        }
        a[j]=key;
    }
}


int main()
{
    int a[10]={6,7,5,4,8,9,3,5,6,80};
    New_Insertion_Sort(a,10);
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
    //int a[5]={1,2,4,4,5};
    //cout<<Binart_Search(a, 4, 0, 4);


}
