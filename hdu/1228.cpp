////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-05-19 13:58:44
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1228
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1412KB
//////////////////System Comment End//////////////////
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	char num[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};   //×Ö·û´®µÄ´¢´æ·½Ê½ £¬×¢ÒâË«ÒýºÅ¡£ 
	char digit[10]; 
	int flag=1,sum[3]={0,0,0},k=1;
	while(scanf("%s",digit)!=EOF)
	 {
	 	int i,result=0;
	 	if(digit[0]=='+')
	 	 k=2;
		 for(i=0;i<=9;i++)
	 	  {
	 	  	if(strcmp(digit,num[i])==0)    
	 	    sum[k]=sum[k]*10+i;
	 	  }
	 	if(digit[0]=='=')
	 	{ 
	 		result=sum[1]+sum[2];
	 		if(result)
	 		 printf("%d\n",result);
	 		if(result==0)
	 		 return 0;
	 		for(i=0;i<=2;i++) 
	 		 sum[i]=0;
	 		k=1;
		}
	 }
	return 0;
}