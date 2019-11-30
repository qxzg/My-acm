////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-11-26 19:45:27
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1091
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1596KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long int n,m;
    while(cin>>n>>m)
    {
       if(n == 0 && m == 0)
          break;
       cout<<n+m<<endl;
    }
    return EXIT_SUCCESS;
}
