////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-04-03 20:09:16
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1233
////Problem Title: 
////Run result: Accept
////Run time:296MS
////Run memory:1696KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int u[5005], v[5005], w[5005], r[5005], p[110];

bool mycmp(int i, int j)
{
   return w[i] < w[j];
}

int f(int i)
{
   return p[i] == i ? i : p[i] = f(p[i]);
}

int main()
{
    int n,i,j,e,x,y;
    while (cin>>n && n)
    {
        int m=n * (n - 1) / 2, sum = 0, num = 0;
        for(j = 1; j <= m; ++j)
            scanf ("%d%d%d", u+j, v+j, w+j);
        for(i = 1; i <= n; ++i) 
           p[i]=i;
        for(j =1 ; j <= m; ++j) 
           r[j] = j;
        sort(r + 1, r + 1 + m, mycmp);
        for(j = 1; j <= m && num < n; ++j)
        {
            e = r[j];
            x = f(u[e]);
            y = f(v[e]);
            if(x != y) 
               sum += w[e], p[x]=y, ++num;
        }
        cout<<sum<<endl;
    }
    return 0;
}
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////
//////////////////////////////////////////////////