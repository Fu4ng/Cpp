#include<iostream>
#include<string>
#include<cmath>
using namespace std;
bool isl(int x);
bool isln(int x);
int main()
{
    int n,k,j;
    cin>>n;//��������Ҫ���Եļ�������
    int y=n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;//������Сֵ�����ֵ
        for(int i=a;i<b;i++)
        {
            if (isl(i)==1) k++;//�ж��Ƿ��Ƿ�ŭ������
            if (isln(i)==1) j++;//�ж��Ƿ��Ƿǳ���ŭ������
        }
        cout<<"Case "<<y-n<<":"<<k<<" "<<j<<endl;
            
    }
}
bool isl(int x)
{
    int d=0,e=0,f=0;//���ڼ����ж�
    int i=log(x)/log(10)+1;//����ܹ��Ǽ�λ��
    int a[i];
    for(int k=0;k<i;k++)
    {
        a[k]=int(x/pow(10,k))%10;//��ÿλ������һ�����飨����ط����Բ��棬ֱ�ӽ��м�����Ƚϼ򵥡�����д��д�˾����øģ�
    }
    for(int j=0;j<i;j++)//����
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
bool isln(int x)//�㷨ͬ��
{
    int i=int(log(x)/log(10))+1;
    int a[i];
    for(int k=0;k<i;k++)
    {
        a[k]=int(x/pow(10,k))%10;
    }
    for(int j=0;j<i-2;j++)
    {
        if (a[j]==1 && a[j+1]==2 && a[j+2]==5)//��Ϊ���ʱ����棬����Ҳ�����ж�
            return 1;
    }
    return 0;
}

