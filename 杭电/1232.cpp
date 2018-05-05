////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-24 18:42:40
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1232
////Problem Title: 
////Run result: Accept
////Run time:156MS
////Run memory:1604KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <string.h>
#include <cmath>
#include <vector>
#include <cstring>

using namespace std;

int p[1010];

int find(int x)
{
    if(p[x]!=x)
        p[x]=find(p[x]);
    return p[x];
}

int main()
{
    int i,j,ro,n,m,x,y;
    while(cin>>n)
    {
        if(n==0)
           break;
        cin>>m;
        for(i=1;i<=n;i++)
           p[i]=i;
        for(i=0;i<m;i++)
        {
           cin>>x>>y;
           p[find(x)]=p[find(y)];
        }
        ro=n-1;
        for(i=1;i<=n;i++)
        {
           if(p[i]!=i)
              ro--;
        }
        cout<<ro<<endl;
    }
    return 0;
}
