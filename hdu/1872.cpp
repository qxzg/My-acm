////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-12-05 21:03:02
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1872
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:1660KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct st
{
    string name;
    int mark;
    int num;
}rt[305];
int cmp(const st &a,const st &b)
{
    if(a.mark!=b.mark)
     return a.mark>b.mark;
     return a.num<b.num;
}
int main()
{
    string a;int b,t;
    while(cin>>t)
    {
        int s=t,tick=0;
        while(s--)
        {
            cin>>rt[s].name>>rt[s].mark;
            rt[s].num=t-s-1;
        }
        sort(rt,rt+t,cmp);s=t;
        while(s--)
        {
            cin>>a>>b;
            if(b!=rt[t-s-1].mark) {tick=1;break;}
            else if(a!=rt[t-s-1].name) tick=2;
        }
        if(tick==1) while(s--) cin>>a>>b;
        switch(tick)
        {
            case 0:cout<<"Right"<<endl;break;
            case 2:cout<<"Not Stable"<<endl;
            for(int i=0;i<t;i++)
                cout<<rt[i].name<<" "<<rt[i].mark<<endl;
            break;
            case 1:cout<<"Error"<<endl;
            for(int i=0;i<t;i++)
                cout<<rt[i].name<<" "<<rt[i].mark<<endl;
            break;
        }
    }
    return 0;
}