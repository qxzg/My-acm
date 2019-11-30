////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-02-28 18:26:10
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1241
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:2036KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

char a[105][105] = {};
int k = 0;

void oil(int i,int j)
{
   if(a[i][j] == '*')
      return ;
   a[i][j] = '*';
   oil(i+1,j);
   oil(i-1,j);
   oil(i,j+1);
   oil(i,j-1);
   oil(i+1,j+1);
   oil(i-1,j-1);
   oil(i+1,j-1);
   oil(i-1,j+1);
}

int main(int argc, char *argv[])
{
    int n, m, i, j;
    while(cin>>n>>m)
    {
       k=0;
       if(n == 0 && m == 0)
          break;
       for(i=0;i<102;i++)
       {
          for(j=0;j<102;j++)
          {
             a[i][j] = '*';
          }
       }
       for(i=1;i<=n;i++)
       {
          for(j=1;j<=m;j++)
          {
             cin>>a[i][j];
          }
       }
       for(i=1;i<=n;i++)
          for(j=1;j<=m;j++)
             if(a[i][j] == '@')
             {
                k++;
                //cout<<i<<" "<<j<<endl;
                oil(i,j);
             }
       cout<<k<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
