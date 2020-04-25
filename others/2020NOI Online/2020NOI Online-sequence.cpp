#include <fstream>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

ifstream cin("sequence.in");
ofstream cout("sequence.out");

int a[1000000] = {}, q[100000000];

int main(int argc, char** argv)
{
	int n,i,j,k;
	long long m = 0,x;
	cin>>n;
	for(i = 1; i <= n; i++)
	   cin >> a[i];
	for(i = 1; i <= n; i++)
	{
		for(j = i; j <= n; j++)
		{
			x = 0;
			for(k = i; k <= j; k++)
			{
				if(q[a[k]] == 0)
				{
					q[a[k]] = 1;
					x++;
				}
			}
			//cout<<i<<"  "<<j<<"  x = "<<x<<endl;
			m += x * x;
			m %= 1000000007;
			for(k = i; k <= j; k++)
				q[a[k]] = 0;
		}
	}
	m %= 1000000007;
	cout<<m;
	return 0;
}

