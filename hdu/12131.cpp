////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-23 19:42:20
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1213
////Problem Title: 
////Run result: Accept
////Run time:31MS
////Run memory:1604KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int a[1005];

int find(int x)
{
  if (x == a[x])
    return x;
  return a[x] = find(a[x]);
}

void unionsets(int x, int y)
{
  int b, e;
  b = find(x);
  e = find(y);
  if (b == e) return;
  if (b < e)
    a[e] = b;
  else
    a[b] = e; 
}

int main(int argc, char *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
      int n, m;
      int x, y;
      int i, j;
      int s;
      cin >> n >> m;
      for (i = 1; i <= n; i++)
        a[i] = i;
      for (i = 1; i <= m; i++)
      {
        cin >> x >> y;
        unionsets(x, y);
      }
      s = 0;
      for (i = 1; i <= n; i++)
        if (a[i] == i)
          s++;
      cout << s << endl;
    }
    return EXIT_SUCCESS;
}
