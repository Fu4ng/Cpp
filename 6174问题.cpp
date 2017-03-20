#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool isl(int x);
bool isln(int x);
int main()
{
    int n,k,j;
    cin>>n;//输入你想要测试的几组数据
    int y=n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;//输入最小值和最大值
        for(int i=a;i<b;i++)
        {
            if (isl(i)==1) k++;//判断是否是愤怒地数字
            if (isln(i)==1) j++;//判断是否是非常愤怒的数字
        }
        cout<<"Case "<<y-n<<":"<<k<<" "<<j<<endl;
            
    }
}
bool isl(int x)
{
    int d=0,e=0,f=0;//用于计数判断
    int i=log(x)/log(10)+1;//算出总共是几位数
    int a[i];
    for(int k=0;k<i;k++)
    {
        a[k]=int(x/pow(10,k))%10;//把每位数存入一个数组（这个地方可以不存，直接进行计数会比较简单。。。写都写了就懒得改）
    }
    for(int j=0;j<i;j++)//计数
    {
        if(a[j]==5) d++;
        if(a[j]==2) e++;
        if(a[j]==1) f++;
    }
    if(d!=0 && e!=0 && f!=0)
        return 1;
    else
        return 0;
}
bool isln(int x)//算法同上
{
    int i=int(log(x)/log(10))+1;
    int a[i];
    for(int k=0;k<i;k++)
    {
        a[k]=int(x/pow(10,k))%10;
    }
    for(int j=0;j<i-2;j++)
    {
        if (a[j]==1 && a[j+1]==2 && a[j+2]==5)//因为存的时候倒序存，所以也倒序判断
            return 1;
    }
    return 0;
}

