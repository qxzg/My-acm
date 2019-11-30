#include <iostream>
#include <cmath>

using namespace std;

int mm[101][3] = {},a,f = 1;

int main(int argc, char** argv)
{
	int n,m,i,l = 1,j;
	bool lol;
	cin>>m>>n;
	if(n == 0)
		f--;
	cin>>mm[0][0];
	mm[0][1] = 0;
	n--;
	for(i = 0; i < n; i++)
	{
	   cin>>a;
	   lol = false;
	   for(j = 0; j < l; j++)
	   	if(mm[j][0] == a)
			{
				lol = true;
				break;
			}
	   if(lol == true)
	   	continue;
	   f++;
	   if(l < m)
	   {
	   	mm[l][0] = a;
	   	mm[l][1] = l;
	   	l++;
	   	continue;
		}
	   j = 0;
	   while(mm[j][1] != 0)
	   	j++;
	   //cout<<j;
	   mm[j][0] = a;
	   mm[j][1] = m;
	   for(j = 0; j < m; j++)
	   	mm[j][1]--;
		/*cout<<"\n================================\n";
	   for(j = 0; j < m; j++)
	   {
	   	cout<<mm[j][0]<<" "<<mm[j][1]<<endl;
		}
		cout<<"\n================================\n";*/
	}
	cout<<f;
	return 0;
}

