////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-05-19 14:04:35
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1231
////Problem Title: 
////Run result: Accept
////Run time:218MS
////Run memory:1608KB
//////////////////System Comment End//////////////////
#include <cstdio>
#include <iostream>
using namespace std;

int a[10000];

struct NUMBER {
	int data;
	int start;
	int end;
};

int main() {
	int k;
	while(scanf("%d",&k)) {
		if(k==0) break;
		
		bool all_0=true;
		for(int i=0;i<k;i++) {
			scanf("%d",&a[i]);
			if(a[i]>=0) all_0=false;
		}
		
		if(all_0) {
			printf("0 %d %d\n",a[0],a[k-1]);
			continue;
		}
		
		NUMBER zd;
		zd.data=a[0];
		zd.start=0;
		zd.end=0;
		NUMBER t;
		t.data=0;
		t.start=0;
		t.end=0;
		for(int i=0;i<k;i++) {
			t.data+=a[i];
			t.end=i;
			if(t.data>zd.data) {
				zd=t;
			}
			if(t.data<0) {
				t.data=0;
				t.start=i+1;
			}
		}
		
		printf("%d %d %d\n",zd.data,a[zd.start],a[zd.end]);
	}
	return 0;
}