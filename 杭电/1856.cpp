////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-25 20:47:16
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1856
////Problem Title: 
////Run result: Accept
////Run time:312MS
////Run memory:80220KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>

using namespace std;

int num[10000002], father[10000002];

void Initial()
{
    int i;
    for(i = 1; i <= 10000002; i++)
    {
        father[i] = i;
        num[i] = 1; 
    }
}

int find(int x) 
{
    if(father[x] != x)
        father[x] = find(father[x]);
    return father[x];
}

void Merge(int a, int b) 
{
    int p, q;
    p = find(a);
    q = find(b);
    if(p != q)
    {
        father[p] = q;
        num[q] += num[p];
    }
}

int main()
{
    int n;
    while(cin>>n)
    {
        if(n == 0)
        {
            cout<<"1\n";
            continue;
        }
        Initial();
        int i, max=0; 
        for(i = 0; i < n; i++)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            if(a > max)
               max = a;
            if(b > max)
               max = b;
            Merge(a, b);
        }
        int Max = 0;
        for(i = 1; i <= max; i++)
        {
            if(num[i] > Max)
                Max = num[i];
        }
        cout<<Max<<endl;
    }
    system("PAUSE");
    return 0;
}
