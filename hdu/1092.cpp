////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-11-26 19:59:32
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1092
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1600KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long int n,m,i,z;
    while(cin>>n)
    {
       z=0;
       if(n == 0)
          break;
       for(i=0;i<n;i++)
       {
          cin>>m;
          z+=m;
       }
       cout<<z<<endl;
    }
    return EXIT_SUCCESS;
}
