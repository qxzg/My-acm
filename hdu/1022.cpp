////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-06-26 20:20:26
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1022
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1584KB
//////////////////System Comment End//////////////////
#include<iostream>
using namespace std;

int main()
{
	int n;       
	int i,j,k;  
	char o1[10];
	char o2[10];	
	int order[20];
	while(cin>>n>>o1>>o2)
	{ 
		int in[10]={0};		
		int out[10]={0}; 
		int count=0;		 
		for(i=0;i<n;i++)	
		{
			for(j=0;j<n;j++)
				if(o1[j]==o2[i])	break;	
			for(k=j;k>=0;k--)
				if(in[k]==0)	{in[k]=1;order[count]=1;count++;}  
				else	break;
			int flag=0;
			for(k=j+1;k<n;k++)
				if(in[k]!=out[k])	{flag=1;break;} 
			if(flag==0)			{out[j]=1;order[count]=2;count++;} 		
			else break;			
		}
		if(count!=2*n)	cout<<"No."<<endl;
		else
		{
			cout<<"Yes."<<endl;
			for(j=0;j<2*n;j++)	
				if(order[j]==1)		cout<<"in"<<endl;
				else if(order[j]==2)	cout<<"out"<<endl;
		}
		cout<<"FINISH"<<endl;
	}
	return 0;
}