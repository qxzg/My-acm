////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-08-02 09:51:08
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1042
////Problem Title: 
////Run result: Accept
////Run time:514MS
////Run memory:3876KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int a[500005];
int n, i, j, k, w;

int main(int argc, char *argv[])
{
    while(cin>>n)
    {
       memset(a, 0, sizeof(a));
       a[0] = a[1] = 1;
       w = 0;
       for(i = 2; i <= n; i++)
       {
          for(j = 1; j <= a[0]; j++)
             a[j] *= i;
          for(j = 1; j <= a[0] + 5; j++)
          {
             a[j + 1] += a[j] / 10000;
             a[j] %= 10000;
             if(a[j] != 0)
                w = j;
          }
          a[0] = w;
       }
       cout<<a[a[0]];
       for(i = w - 1; i > 0; i--)
          printf("%04d", a[i]);
       cout<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
