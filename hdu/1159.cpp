////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-04-08 18:15:57
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1159
////Problem Title: 
////Run result: Accept
////Run time:78MS
////Run memory:2764KB
//////////////////System Comment End//////////////////
#include <iostream>  
#include<cstdio>  
#include<cstring>  
#include<cmath>  
  
using namespace std;  
  
int d[550][550];  
  
int main()  
{  
    string s1,s2;  
    while(cin>>s1>>s2)  
    {  
        int len1=s1.length(),len2=s2.length();  
        memset(d,0,sizeof(d));  
        for(int i=1;i<=len1;i++)  
            for(int j=1;j<=len2;j++)  
            {  
                if(s1[i-1]==s2[j-1])  
                    d[i][j]=d[i-1][j-1]+1;  
                else  
                    d[i][j]=max(d[i-1][j],d[i][j-1]);  
            }  
        cout<<d[len1][len2]<<endl;  
   }  
}  