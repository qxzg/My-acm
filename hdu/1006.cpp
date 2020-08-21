////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-08-09 15:14:36
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1006
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1884KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <iomanip>
using namespace std;
#define vs 6.
#define vm 1./double(10)
#define vh 1./double(120)
int main()
{
	double D;
        double T[3]={(360./(vm-vh)),(360./(vs-vm)),(360./(vs-vh))}; //时分 分秒 时秒 的相对周期
	while(cin>>D && D!=-1)
	{
                double HS[3]={(D/360.)*T[0],(D/360.)*T[1],(D/360.)*T[2]};//存储每对针的开始Happy时间
                double HE[3]={(360.-D)/360.*T[0],((360.-D)/360.*T[1]),((360.-D)/360.*T[2])}; //存储每对针的结束Happy时间
                double happyTime=0.,nextHS=HS[0],nextHE=min(HE[1],HE[2]);
                while(HS[1]<43200-(D/360.)*T[0] && HS[2]<43200-(D/360.)*T[0] )
                {
                     nextHS= max(HS[0],max(HS[1],HS[2]));
                     nextHE= min(HE[0],min(HE[1],HE[2]));
                     happyTime += (nextHE-nextHS)>0. ?  nextHE-nextHS : 0.;
                     for(int i=0;i<3;i++)
                     {
                        HS[i]+=   (nextHE-HE[i] <0. ? HE[i]-nextHE : nextHE-HE[i])< 1e-15   ?  T[i] : 0. ;
                        HE[i]+=   (nextHE-HE[i] <0. ? HE[i]-nextHE : nextHE-HE[i])< 1e-15   ?  T[i] : 0. ;
                     }
                }
		double result= happyTime/432.;
                cout<<setiosflags(ios::fixed)<<setprecision(3)<<result<<endl;
	}
}