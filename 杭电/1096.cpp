////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-11-26 20:05:45
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1096
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1592KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long int n,m,i,j,z,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
       cin>>m;
       a=0;
       for(j=0;j<m;j++)
       {
          cin>>z;
          a+=z;
       }
       cout<<a<<endl;
       if(i != n-1)
          cout<<endl;
    }
    return EXIT_SUCCESS;
}
