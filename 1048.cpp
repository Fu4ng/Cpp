#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
 	string s;
 	getline(cin,s);
 	int a=0;
 	for(;s[a]!='\0';a++);
 		s[a]=s[a]+5;
 	cout<<s<<endl;
 }
