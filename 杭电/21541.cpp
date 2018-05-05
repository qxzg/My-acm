////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-03-25 19:41:48
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2154
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1928KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n,i,j;
    int m,s;
    int a[1005][4] = {};
    a[0][0] = 1;
    for(i = 1; i <= 1001; i++)
    {
       a[i][0] = (a[i - 1][1] + a[i - 1][2]) % 10000;
       a[i][1] = (a[i - 1][0] + a[i - 1][1]) % 10000;
       a[i][2] = (a[i - 1][0] + a[i - 1][1]) % 10000;
    }
    while(cin>>n)
    {
       if(n == 0)
          break;
       cout<<a[n][0]<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
