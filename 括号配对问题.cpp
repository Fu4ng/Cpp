
/*括号配对问题
时间限制：3000?ms ?|? 内存限制：65535?KB?
难度：3
描述?
现在，有一行括号序列，请你检查这行括号是否配对。
输入
第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每组输入数据都是一个字符串S(S的长度小于10000，且S不是空串），测试数据组数少于5组。数据保证S中只含有"[","]","(",")"四种字符
输出
每组输入数据的输出占一行，如果该字符串中所含的括号是配对的，则输出Yes,如果不配对则输出No
样例输入
3
[(])
(])
([[]()])
样例输出
No
No
Yes
*/



#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,i,a,b;
    cin>>n;
    while(n--)
    {   
		a=0;b=0;
        string str;
        cin>>str;
        
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='(') 
			{
				a++;
			}
			if(str[i]=='[') 
			{
				b++;
			}
			if(str[i]==')') 
			{	
				if(str[i-1]=='[')
				{	
					a=5;
					break;
					
				}
				else 
				{
					a--;
					if(a<0)
					{
						a=5;
						break;
					}
				 } 
			}
			if(str[i]==']') 
			{	
				if(str[i-1]=='(')
				{
					
					a=5;
					break;
				}
				else 
				{
					b--;
					if(b<0)
					{
						a=5;
						break;
					}
				 } 
			}
    	}
    	if(a==0&&b==0) 
		cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
	}
	return 0;
}

