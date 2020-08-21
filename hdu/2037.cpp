////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: 你猜
////Run ID: 
////Submit time: 2015-12-17 20:45:37
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 2037
////Problem Title: 
////Run result: Accept
////Run time:0MS
////Run memory:1584KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a[100],i,n,b[100],temp,j,z;
	while(cin>>n)
	{
		if(n == 0)
			break;
		for(i = 0; i < n; i++)
			cin>>a[i]>>b[i];
       for(i = 0; i < n - 1; i++)
          for(j = i + 1; j < n; j++)
	    	{
			if(b[i] > b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		   z = 1;
		   j = 0;
            for(i = 0; i < n; i++)
			{
				if(a[i] >= b[j])
				{
					j = i;
					z++;
				}
			} 
			cout<<z<<endl;
	}
    return 0;
}
