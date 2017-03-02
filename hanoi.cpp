#include<iostream>
using namespace std;
void hanoi(int n,char a,char b,char c)
{
if(n==1)
cout<<n<<" "<<a<<" "<<c<<endl;
else
{
hanoi(n-1,a,c,b);
cout<<n<<" "<<a<<" "<<c<<endl;
hanoi(n-1,b,a,c);
}
}
int main()
{
int n;
cout<<"输入正整数:"<<endl;
cin>>n;
cout<<"结果为"<<endl;
hanoi(n,'A','B','C');
/*
假设有4层，跟全排列差不多的想法，先把他看成3层，再看成2层，而且移动的方法是相同的。*/ 
return 0;
} 
