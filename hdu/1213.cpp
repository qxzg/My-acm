////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-01-23 19:25:45
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1213
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1644KB
//////////////////System Comment End//////////////////
#include <iostream>  
#include <algorithm>  
#include <cstring>  
#include <string>  
#include <cstdio>  
#include <queue>  
#define MAX_N 5000   
using namespace std;  
int ans;  
int par[MAX_N];  
int Rank[MAX_N];   
void init(int n)   
{  
    for(int i = 0;i < n;i++)  
    {  
        par[i] = i;     
        Rank[i] = 0;         
    }  
                  
}  
int find(int x)     
{  
    if(par[x] == x)   
    return x;  
    else  
    return par[x] = find(par[x]);     
}   
void unite(int x,int y)   
{  
    x = find(x);  
    y = find(y);  
    if(x == y)           
    return;  
    if(Rank[x] < Rank[y])  
    par[x] = y;      
    else  
    par[y] = x;          
    if(Rank[x] == Rank[y])  
    Rank[x]++;        
      
}  
bool same(int x,int y)     
{  
    return find(x) == find(y);    
}  
int main()  
{  
    int n,m,t;  
    cin >> t;  
    while(t--)  
    {  
        scanf("%d%d",&n,&m);  
        memset(par,0,sizeof(par));    
        ans = n;                    
        init(n);  
        for(int i = 0;i < m;i++)  
        {  
            int a,b;  
            scanf("%d%d",&a,&b);  
            if(same(a,b))     
            continue;  
            else    
            {  
                unite(a,b);  
                ans--; 
            }  
              
        }  
        cout << ans << endl;      
    }  
    return 0;  
}  
