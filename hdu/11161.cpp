////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-02-28 21:00:45
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1116
////Problem Title: 
////Run result: Accept
////Run time:1248MS
////Run memory:1596KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int a[30];

int find(int x)
{
  if (x == a[x])
    return x;
  return a[x] = find(a[x]);
}

void UN(int x, int y)
{
  int b, e;
  b = find(x);
  e = find(y);
  if (b != e)
    a[b] = e;
}

int main(int argc, char *argv[])
{
    int T;
    cin >> T;
    while (T--)
    {
      int n;
      int b, e;
      int l;
      int dian[30] = {}; 
      char s[1005];
      int i;
      int c[30] = {};
      int ling = 0;
      int yif, yiz;
      cin >> n;
      int cnt = 0;
      bool flagtong, flag0;
      for (i = 1; i <= 26; i++)
        a[i] = i;
      for (i = 1; i <= n; i++)
      {
        cin >> s;
        l = strlen(s);
        b = s[0] - 'a' + 1;
        e = s[l - 1] - 'a' + 1;
        c[b] = c[e] = 1;
        //cout << b << " " << e << endl;
        dian[b]--;
        dian[e]++;
        UN(b, e);
      }
      flagtong = true;
      flag0 = true;
      ling = 0;
      yif = yiz = 0;
      for (i = 1; i <= 26; i++)
      {
        if (c[i] == 1)
        {
          if (a[i] == i)
          {
            cnt++;
            if (cnt > 1)
            {
              flagtong = false;
              break;
            }
          }
          if (dian[i] == 1)
              yiz++;
          if (dian[i] == -1)
              yif++;
          if (dian[i] > 1 || dian[i] < -1)
          {
              flag0 = false;
              break;
          }
        }
      }
      if (flagtong && flag0 && yif == 0 && yiz == 0 || flagtong && flag0 && yif == 1 && yiz == 1)
        cout << "Ordering is possible." << endl;
      else
        cout << "The door cannot be opened." << endl;
    }
    return EXIT_SUCCESS;
}
