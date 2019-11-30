////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-02-17 21:00:23
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1003
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:1576KB
//////////////////System Comment End//////////////////
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,n,a,i,kai,zhong,zong,maxsum,x;
    scanf("%d",&t);
    q=t;
    while(t--)
    {
        maxsum=-1001;x=0;zhong=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            x+=a;
            if(x>maxsum)
            {
                maxsum=x;
                kai=zhong;
                zong=i;
            }
            if(x<0)
            {
                x=0;zhong=i+1;
            }
        }
        printf("Case %d:\n%d %d %d\n",q-t,maxsum,kai+1,zong+1);
        if(t) printf("\n");
    }
    return 0;
}