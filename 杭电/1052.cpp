////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-07 19:20:37
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1052
////Problem Title: 
////Run result: Accept
////Run time:93MS
////Run memory:1600KB
//////////////////System Comment End//////////////////
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
	int n, i, j, sum, tian[1005], king[1005], t_min, k_min, t_max, k_max;
	while(cin>>n)
    {
        if(n == 0)
           break;
		for(i = 0; i < n; i++)
           cin>>tian[i];
		for(i = 0; i < n; i++)
           cin>>king[i];
		sort(tian, tian + n);
		sort(king, king + n);
		k_min = t_min = sum=0;
		t_max = k_max = n-1;
		while(t_min <= t_max && k_min <= k_max)
        {
			if(tian[t_max] > king[k_max])
            {
				t_max--;
				k_max--;
				sum += 200;
			}
            else
               if(tian[t_max] < king[k_max])
               {
			       t_min++;
				   k_max--;
				   sum -= 200;
			   }
               else
               {
				  if(tian[t_min] > king[k_min])
                  {
					  t_min++;
					  k_min++;
					  sum += 200;
				  }
                  else 
                    if(tian[t_min] < king[k_min])
                    {
					    t_min++;
					    k_max--;
					    sum -= 200;
				    }
                    else
                    {
					   if(tian[t_min] < king[k_max]) 
                          sum -= 200;
				 	   t_min++;
				 	   k_max--;
				    }
		       }  
		}
		cout<<sum<<endl;
	}
	return EXIT_SUCCESS;
}