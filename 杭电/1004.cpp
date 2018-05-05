////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2015-11-26 21:47:41
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1004
////Problem Title: 
////Run result: Accept
////Run time:15MS
////Run memory:1428KB
//////////////////System Comment End//////////////////
#include<stdio.h>  
#include<string.h>  
int main()  
{  
    char a[1005][20];  
    int i,j,n;  
    int b[1005];  
    while(scanf("%d",&n)&&(n!=0))  
    {  
        memset(b,0,sizeof(b));  
        for(i=0; i<n; i++)  
        {  
            scanf("%s",a[i]);  
        }  
        for(i=0; i<n; i++)  
            for(j=0; j<n; j++)  
            {  
                if(strcmp(a[i],a[j])==0)  
                    b[i]++;  
            }  
        int max=-1;  
        int k;  
        for(i=0; i<n; i++)  
        {  
            if(max<b[i])  
            {  
                max=b[i];  
                k=i;  
            }  
        }
        printf("%s\n",a[k]);  
    }  
    return 0; 
}