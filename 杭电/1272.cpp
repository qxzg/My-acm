////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-24 18:28:54
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1272
////Problem Title: 
////Run result: Accept
////Run time:405MS
////Run memory:1972KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int h[100005];

int main(int argc, char *argv[])
{
    int i, k, a, b, sum;
    while (1)
    {
        sum = k = 1;
        for(i=0;i<100005;i++)
           h[i]=0;
        while (cin>>a>>b, a + b)
        {
            if (a + b == -2)
               return EXIT_SUCCESS;
			k++;
            if (h[a] == 0)
            {
                h[a] = 1;
                sum++;
            }
            if (h[b] == 0)
            {
                h[b] = 1;
                sum++;
            }
        }
        if ( k == 1 || sum - 1 == k )
           cout<<"Yes\n";
        else
           cout<<"No\n";
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
