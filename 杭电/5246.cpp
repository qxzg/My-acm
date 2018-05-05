////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-12-05 22:26:22
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 5246
////Problem Title: 
////Run result: Accept
////Run time:374MS
////Run memory:1636KB
//////////////////System Comment End//////////////////
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int main(){
	int t;
	__int64 n,m,k;
	__int64 a[10010];
	scanf("%d",&t);
	for(int cse=1;cse<=t;cse++){
		printf("Case #%d:\n",cse);
		scanf("%I64d%I64d%I64d",&n,&m,&k);
		for(int i=0;i<n;i++)
			scanf("%I64d",&a[i]);
		sort(a,a+n);
		__int64 num=0;
		for(int i=0;i<n;i++){
			if(a[i]>m){
				printf("madan!\n");
				break;
			}
			while(a[i]<=m&&i<n)
				i++;
			if(i==n){
				printf("why am I so diao?\n");
				break;
			}
			m=a[--i];
			m+=max(k-num,0ll);
			num++;
		}
	}
	return 0;
}