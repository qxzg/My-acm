////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-08-09 15:13:18
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1005
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1916KB
//////////////////System Comment End//////////////////

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int A, B;
    int n;
    int sum;
    while (cin >> A >> B >> n)
    {
          if (A == 0 && B == 0 && n == 0)
             break;
          int arr[48];
          arr[1] = 1;
          arr[2] = 1;
          for (int i = 3; i < 48; i++)
          arr[i] = ((A * arr[i-1] + B * arr[i-2]) % 7);
          cout << arr[n % 48] << endl;
    }
    system("PAUSE");
    return 0;
}