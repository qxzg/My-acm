////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-01-27 19:49:06
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1285
////Problem Title: 
////Run result: Accept
////Run time:78MS
////Run memory:2584KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdlib>

using namespace std;  

int a[502][502];
int degree[502];
int output[502];

int main()  
{
    int n, m;
    while(cin>>n>>m)
    {
        memset(a, 0, sizeof(a));
        memset(degree, 0, sizeof(degree));
        memset(output, 0, sizeof(output));
        for(int i = 0; i < m; i++)
        {
            int x, y;
            cin>>x>>y;
            if(a[x][y] == 0)
            {
                a[x][y]++;
                degree[y]++;
            }
        }
        int cont = 0;
        while(true)
        {
            int j = 1;
            if(degree[j] != 0)
            {
                while(true)
                {
                    j++;
                    if(degree[j] == 0)
                       break;
                    if(j > n)
                       break;
                }
            }
            degree[j] =- 1;
            output[cont] = j;
            cont++;
            if(cont == n)
               break;
            for(int i = 1; i <=n ; i++)
            {
                if(a[j][i] > 0)
                {
                    degree[i]--;
                    a[j][i] =- 1;
                }
            }
        }
        for(int i = 0; i < cont - 1; i++)
        {
            cout<<output[i];
            if(i != cont - 1)
               cout<<" ";
        }
        cout<<output[cont - 1]<<endl;
    }
    return 0;
}
