////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-12-03 20:43:48
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1862
////Problem Title: 
////Run result: Accept
////Run time:2028MS
////Run memory:3952KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

struct a
{
       char no[10];
       char n[10];
       int p;
};

bool my1(a n,a m)
{
   if(strcmp(n.no, m.no) == -1)
      return 1;
   else
      return 0;
}

bool my2(a n,a m)
{
   if(strcmp(n.n, m.n) == -1 || strcmp(n.n, m.n) == 0 && strcmp(n.no, m.no) == -1)
      return 1;
   else
      return 0;
}

bool my3(a n,a m)
{
   if(n.p < m.p || n.p == m.p &&strcmp(n.no, m.no) == -1)
      return 1;
   else
      return 0;
}

a a[100001];

int main(int argc, char *argv[])
{
    int n,m,z=0,i;
    while(cin>>n>>m)
    {
       if(n == 0)
          break;
       z++;
       cout<<"Case "<<z<<":"<<endl;
       for(i=0;i<n;i++)
          cin>>a[i].no>>a[i].n>>a[i].p;
       if(m == 1)
          sort(a, a + n, my1);
       if(m == 2)
          sort(a, a + n, my2);
       if(m == 3)
          sort(a, a + n, my3);
       for(i=0;i<n;i++)
          cout<<a[i].no<<" "<<a[i].n<<" "<<a[i].p<<endl;
    }
    return EXIT_SUCCESS;
}
