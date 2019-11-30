////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-11-26 19:59:59
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1093
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
    long long int n,m,i,z;
    cin>>n;
    while(cin>>n)
    {
       z=0;
       for(i=0;i<n;i++)
       {
          cin>>m;
          z+=m;
       }
       cout<<z<<endl;
    }
    return EXIT_SUCCESS;
}
