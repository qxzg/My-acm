////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-02-16 20:03:42
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1865
////Problem Title: 
////Run result: Accept
////Run time:46MS
////Run memory:1652KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int x[201][45];

void make()
{
	memset(x,0,sizeof(x));
	x[1][0]=1;
	x[2][0]=2;
	for(int i=3;i<=200;++i)                
	{
		for(int j=0;j<=42;++j)
		{
			x[i][j]+=x[i-1][j]+x[i-2][j];
			if(x[i][j]>=10)
			{
				x[i][j+1]+=1;
				x[i][j]-=10;
			}
		}
	}
}

void print(int n)   
{
	int i=42;
	while(x[n][i]==0)
		--i;
	for(;i>=0;--i)
		cout<<x[n][i];
	cout<<endl;
}

int main()
{
	make();
	int n;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		print(s.size());
	};
	return 0;
}
