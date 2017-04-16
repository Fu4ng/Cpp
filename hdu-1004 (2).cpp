#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
int n;
while(cin>>n&&n)
{
string str[1001];
for(int i=1;i<=n;i++)
{
cin>>str[i];
}
sort(str+1, str+n+1);
int sum[1001];
for( int i=1;i<=n;i++)
sum[i]=1;
int max=1;
for( int i=2;i<=n;i++)
{
if(str[i]==str[i-1])
{
sum[i]+=sum[i-1];
}
if(sum[i]>=sum[max])
max=i;
}
cout<<str[max]<<endl;
}
return 0;
}


