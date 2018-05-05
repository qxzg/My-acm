////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-04-17 19:16:40
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1233
////Problem Title: 
////Run result: Accept
////Run time:265MS
////Run memory:2020KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int u[5002], v[5002], w[5002], p[110], r[5002];

bool my_cmp(int i, int j)
{
   return w[i] < w[j];
}

int f(int i)
{
   return p[i] == i ? i : p[i] = f(p[i]);
}

int main(int argc, char *argv[])
{
    int n, i, j, e, x, y;
    int m, sum, num;
    while(cin>>n && n)
    {
       m = n * (n - 1) / 2;
       sum = num = 0;
       for(j = 1; j <= m; j++)
          scanf ("%d%d%d", u+j, v+j, w+j);
       for(i = 1; i <= n; i++)
          p[i] = i;
       for(i = 1; i <= m; i++)
          r[i] = i;
       sort(r + 1, r + 1 + m, my_cmp);
       for(j = 1; j <= m && num < n; j++)
       {
          e = r[j];
          x = f(u[e]);
          y = f(v[e]);
          if(x != y)
          {
             sum += w[e];
             p[x] = y;
             num++;
          }
       }
       cout<<sum<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}