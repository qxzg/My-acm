////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-12-10 19:25:28
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1201
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1568KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <map>
#include <cmath>
#include <ctime>
#include <algorithm>
using namespace std;

int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool ispri(int y)
{
	if(y%400 == 0 || y%4 == 0 && y%100 != 0)return true;
	return false;
}

int main()
{
	int t,year,mon,day,sum,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%*c%d%*c%d",&year,&mon,&day);
		if(mon == 2 && day == 29)
		{
			printf("-1\n");
			continue;
		}
		sum=365*18;
		for(i=year;i<=year+18;i++)
		{
			if(i == year)
			{
				if(mon == 1 || mon == 2 && day<29)
				{
					if(ispri(i))sum++;
				}
			}
			else if(i == year+18)
			{
				if(mon == 1 || mon == 2 && day<29)
				{
				}
				else
				{
					if(ispri(i))sum++;
				}
			}
			else
			{
				if(ispri(i))sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}