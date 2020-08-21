////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2015-12-10 19:30:43
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1001
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1420KB
//////////////////System Comment End//////////////////
#include<stdio.h>
int main()
{
	double n;
	while(scanf("%lf",&n)!=EOF)
		printf("%d\n\n",(int)(n*(n+1)/2));
	return 0;
}