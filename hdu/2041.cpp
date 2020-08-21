////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-02-16 18:29:16
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2041
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1592KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n,m,i,j;
    int a[50]={};
    cin>>n;
    while(cin>>n)
    {
       n--;
       a[0]=1;
       a[1]=2;
       for(i=2;i<n;i++)
       {
          a[i]=a[i-1]+a[i-2];
       }
       cout<<a[n-1]<<endl;
    }
    return EXIT_SUCCESS;
}
