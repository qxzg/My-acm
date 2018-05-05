////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-05-19 13:53:48
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1232
////Problem Title: 
////Run result: Accept
////Run time:124MS
////Run memory:1604KB
//////////////////System Comment End//////////////////
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
//#include <windows.h>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <limits>
#include <list>
#include <map>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <utility>
#include <vector>
#include <cwchar>
#include <cwctype>

using namespace std;

int p[1010];

int find(int x)
{
    if(p[x] != x)
        p[x] = find(p[x]);
    return p[x];
}

int main(int argc, char *argv[])
{
	int i, j, ro, n, m, x, y;
    while(cin >> n)
    {
        if(n == 0)
           break;
        cin >> m;
        for(i = 1; i <= n; i++)
           p[i] = i;
        for(i = 0; i < m; i++)
        {
           cin >> x >> y;
           p[find(x)] = p[find(y)];
        }
        ro = n - 1;
        for(i = 1; i <= n; i++)
        {
           if(p[i] != i)
              ro--;
        }
        cout<<ro<<endl;
    }
    return EXIT_SUCCESS;
}
