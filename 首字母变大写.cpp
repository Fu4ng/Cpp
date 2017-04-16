#include <stdio.h>    
#define N 256      
int main()      
{char a[N];     
while(gets(a)) 
{
int i,Flag=0;   
        
for(i=0;a[i]!=0;i++)      
{if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))      
{if(Flag==0)      
{Flag=1;      
   if(a[i]>='a'&&a[i]<='z')      
    a[i]=a[i]-32;      
}      
}      
else Flag=0;      
}      
puts(a);  }    
return 0;      
}
