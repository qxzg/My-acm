////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-08-02 19:02:37
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1717
////Problem Title: 
////Run result: Accept
////Run time:15MS
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
#include <deque>
#include <exception>
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

int gcd(int a, int b) 
{
    int c;
    if(a < b)
       swap(a, b);
    while(a %b != 0) 
	{
       c = a % b;
       a = b;
       b = c;
    }
    return b;
}

int main(int argc, char *argv[])
{
	int n;
    char s[1000];
    int i, fz, fm, x = 0, a = 0, b = 0, fa = 1, fb = 1;
	cin>>n;
    while(n--)
	{
       cin>>s;
       x = a = b = 0;
       fa = fb = 1;
       for(i = 0; i < strlen(s) && s[i] != '.'; i++)
           x = x * 10 + s[i] - 48;
       for(i += 1; i < strlen(s) && s[i] != '('; i++) 
       {
           a = a * 10 + s[i] - 48;
           fa *= 10;
       }
       if(s[i] == '(')
	   {
           for(i += 1; s[i] != ')'; i++) 
	       {
               b = b * 10 + s[i] - 48;
               fb *= 10; 
           }
       }
       if(b != 0) 
	   {
           fz = a * (fb - 1) + b;
           fm  = fa * (fb - 1);
       }
       else 
	   {
           fz = a;
           fm = fa;
       }
       cout<<fz / gcd(fz, fm)<<"/"<<fm / gcd(fz, fm)<<endl;
    }
    return EXIT_SUCCESS;
}
