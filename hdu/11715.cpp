////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-02-25 19:13:28
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1171
////Problem Title: 
////Run result: Accept
////Run time:1934MS
////Run memory:3596KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<string.h>
using namespace std;
struct vivo
{
    int v,n;
};
vivo date[60];
int c1[260000],c2[260000];
int main()
{
    int n,m,j,i,k,l,s;
    while(~scanf("%d",&n)&&n>0)
    {
        s=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&date[i].v,&date[i].n);
            s=s+date[i].v*date[i].n;
        }
        m=s/2;
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        for(i=0;i<=m&&((i/date[1].v)<=date[1].n);i+=date[1].v)
        c1[i]=1;
        for(i=2;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                for(k=0;k+j<=m&&((k/date[i].v)<=date[i].n);k+=date[i].v)
                c2[k+j]+=c1[j];
            }
            for(j=0;j<=m;j++)
            c1[j]=c2[j],c2[j]=0;
        }
        for(i=m;i>=0;i--)
        {
            if(c1[i])
            break;
        }
        printf("%d %d\n",s-i,i);
    }
    return 0;
}