////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-04-01 19:12:55
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1176
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:18004KB
//////////////////System Comment End//////////////////
#include<stdio.h>  
#include<string.h>  
#include<iostream>  
using namespace std;  
int a[140000][15];  
int dp[140000][15];  
int main()  
{  
    int n;  
    while(~scanf("%d",&n))  
    {  
        if(n==0)break;  
        memset(a,0,sizeof(a));  
        memset(dp,0,sizeof(dp));  
        int maxntime=0;  
        for(int i=0;i<n;i++)  
        {  
            int p,t;  
            scanf("%d%d",&p,&t);  
            a[t][p]++;  
            maxntime=max(maxntime,t);  
        }  
        for(int i=maxntime;i>=0;i--)  
        {  
            for(int j=0;j<11;j++)  
            {  
                if(i==maxntime)dp[i][j]=a[i][j];  
                if(j==0)  
                {  
                    dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+a[i][j];  
                    continue;  
                }  
                if(j==11)  
                {  
                    dp[i][j]=max(dp[i+1][j],dp[i+1][j-1])+a[i][j];  
                    continue;  
                }  
                dp[i][j]=max(dp[i+1][j],max(dp[i+1][j-1],dp[i+1][j+1]))+a[i][j];  
            }  
        }  
        //printf("%d\n",max(dp[1][5],max(dp[1][4],dp[1][6])));  
        printf("%d\n",dp[0][5]);  
    }  
}  