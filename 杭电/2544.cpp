////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-03-13 20:14:14
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2544
////Problem Title: 
////Run result: Accept
////Run time:78MS
////Run memory:1960KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int i, j, n, m, x, y, z, k, f[101][101];
    
int main(int argc, char *argv[])
{
    while(cin>>n>>m)
    {
        if(n == 0 && m == 0) 
        {
           break;
        }
        for(i = 1; i <= n; i++)
        {
           for(j = 1; j <= n; j++)
           {
              f[i][j] = 100000000;
           }
        }
        for(i = 1; i <= m; i++)
        {
            cin>>x>>y>>z;
            f[x][y] = min(f[x][y], z);
            f[y][x] = f[x][y];
        }
        for(k = 1; k <= n; k++)
        {
           for(i = 1; i <= n; i++)
           {
              for(j = 1; j <= n; j++)
              {
                 f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
              }
           }
        }
        cout<<f[1][n]<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
