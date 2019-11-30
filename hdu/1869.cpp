////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-03-27 20:27:28
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 1869
////Problem Title: 
////Run result: Accept
////Run time:78MS
////Run memory:1828KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdio>

using namespace std;

int g[101][101];

int main()
{
    int n, m, a, b, j, i, k, p;
    while(cin>>n>>m)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(i == j)
                    g[i][j] = 0;
                else
                    g[i][j] = 1000;
            }
        }
        for(i = 0; i < m; i++)
        {
            cin>>a>>b;
            g[a][b] = g[b][a] = 1;
        }
        for(i = 0; i < n; i++)
            for(j = 0; j < n; j++)
                for(k = 0; k < n; k++)
                    if(g[j][k] > g[j][i] + g[i][k])
                        g[j][k] = g[j][i] + g[i][k];
        p = 0;
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < i; j++)
            {
                if(g[i][j] > 7)
                {
                    p = 1;
                    break;
                }
            }
            if(p)
                break;
        }
        if(p)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
