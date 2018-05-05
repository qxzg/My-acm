////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-05-19 14:04:00
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1234
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:1596KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b;
    string first,last,ftime,ltime,str0,str1,str2;
    cin>>a;
    while(a--)
    {
        cin>>b;
        cin>>str0>>ftime>>ltime;
        last=first=str0;
        while(--b)
        {
            cin>>str0>>str1>>str2;
            if(str1.compare(ftime)<0)
            {
                first=str0;
                ftime=str1;
            }

            if(str2.compare(ltime)>0)
            {
                last=str0;
                ltime=str2;
            }
        }
        cout<<first<<" "<<last<<endl;
    }
    return 0;
}