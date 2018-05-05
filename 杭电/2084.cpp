////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-03-25 18:24:08
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2084
////Problem Title: 
////Run result: Accept
////Run time:218MS
////Run memory:1960KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m;
    cin>>m;
    int i,j,n,k,mymax;
    while(m--)
    {
       int a[105][105] = {};
       cin>>n;
       mymax = -1000;
       for(i = 0; i < n; i++)
          for(j = 0; j <= i; j++)
             cin>>a[i][j];
       for(i = 1; i < n; i++)
       {
          for(j = 0; j <= i; j++)
          {
             if(j == i)
                k = a[i - 1][j - 1];
             else
             {
                if(j == 0)
                   k = a[i - 1][0];
                else
                   k = max(a[i - 1][j - 1], a[i - 1][j]);
             }
             a[i][j] += k;
          }
       }
       i = n - 1;
       for(j = 0; j < n; j++)
       {
          if(a[i][j] > mymax)
             mymax = a[i][j];
          //cout<<a[i][j]<<" ";
       }
       cout<<mymax<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
