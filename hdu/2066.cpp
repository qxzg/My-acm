////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-03-27 19:16:06
////Compiler: Visual C++
//////////////////////////////////////////////////////
////Problem ID: 2066
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:6004KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>

using namespace std;

int p[1001][1001];

int main(int argc, char *argv[])
{
    bool r[1001];
    int q[1001];
    int a,b,c;
    int x,y,z;
    int t,s,d;
    int i,j,k;
    int w[1001];
    int e[1001];
   while(cin>>t>>s>>d)
    {
       for(i=1;i<=1000;i++)
       {
          w[i]=e[i]=q[i]=r[i]=0;
          for(j=1;j<=1000;j++)
          {
             p[i][j]=9999999;                 
          }                 
       }
       for(i=1;i<=t;i++)
       {
          cin>>a>>b>>c;
          if(p[a][b]>c)
          {
             p[a][b]=p[b][a]=c;      
          }                 
       } 
       cin>>z;
       for(i=2;i<=s;i++)
       {
          cin>>w[i];
          r[w[i]]=1;
          for(j=1;j<=1000;j++)
          {
             if(p[w[i]][j]<p[z][j])
             {
                p[z][j]=p[w[i]][j];                     
             }    
             p[w[i]][j]=9999999;                   
          }              
       }           
       for(i=1;i<=d;i++)
       {
          cin>>e[i];                 
       }
       for(i=1;i<=1000;i++)
       {
          q[i]=p[z][i];    
          //cout<<q[i]<<endl;                
       }     
       q[z]=0;          
       r[z]=1;
       x=z;
       for(i=1;i<=1000;i++)
       {
          a=9999999;
          for(j=1;j<=1000;j++)
          {
             if(q[j]<a&&r[j]==0)
             {
                a=q[j];
                x=j;          
             }                    
          }
          if(a==9999999)break;
          r[x]=1;
          //cout<<x<<a<<endl;
          for(j=1;j<=1000;j++)
          {
             if(q[x]+p[x][j]<q[j]&&r[j]==0)
             {
                q[j]=q[x]+p[x][j];                                            
             }                         
          }                       
       } 
       y=9999999;
       for(i=1;i<=d;i++)
       {
          if(y>q[e[i]])
          {
             y=q[e[i]];           
          }                 
       }
       if(y!=9999999)
          cout<<y<<endl;               
    } 
    system("PAUSE");
    return EXIT_SUCCESS;
}