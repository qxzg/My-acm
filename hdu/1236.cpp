////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2016-05-19 14:03:22
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1236
////Problem Title: 
////Run result: Accept
////Run time:280MS
////Run memory:1772KB
//////////////////System Comment End//////////////////
# include <iostream>
# include <cstdio>
# include <string.h>
using namespace std;

int main(){
	
	int N,M,G;
	int a[1009];//分值
	char name[1009][100];
	int b[100];//z做对的题号
	int cnt,i,j,n,m;
	int up[1009],sum;
	char na[1009][100];
	while(scanf("%d",&N)){
		
		if(N==0)
			break;
		
		scanf("%d%d",&M,&G);
		
		cnt = 0;
		for(i=1;i<=M;i++){
			scanf("%d",&a[i]);
		}
		
		for(i=0;i<N;i++){
			scanf("%s",name[i]);
			scanf("%d",&m);
			int count;
			sum = 0;
			for(j=0;j<m;j++){
				scanf("%d",&count);
				sum+=a[count];
			}
			if(sum>=G){
				up[cnt] = sum;
				strcpy(na[cnt],name[i]);
				cnt++;
				
			}
		}
		
		int t;		
		char ch[100];
		for(i=0;i<cnt;i++){
			for(j=i+1;j<cnt;j++){
				if(up[j]>up[i]){
					t=up[j],up[j]=up[i],up[i]=t;
					strcpy(ch,na[i]);
					strcpy(na[i],na[j]);
					strcpy(na[j],ch);	 
					 
				}else if(up[j]==up[i]){
					 if(strcmp(na[i],na[j])>0){
					 	strcpy(ch,na[i]);
						strcpy(na[i],na[j]);
						strcpy(na[j],ch);	
					 } 
				}
			}
			
		} 
		
		if(cnt==0){
			printf("0\n");
		}else{
			printf("%d\n",cnt);
			for(i=0;i<cnt;i++){
				printf("%s %d\n",na[i],up[i]);
			}
		
			
		}
	
	}
	 
	
	return 0;
}