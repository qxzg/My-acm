#include <fstream>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

ifstream cin("color.in");
ofstream cout("color.out");

int a[100000000], b[100000000];
long long int p1,p2,k;

int main(int argc, char** argv)
{
	int qwq;
	long long int n,m,i,j,x;
	cin>>qwq;
	while(qwq > 0)
	{
		qwq--;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cin>>p1>>p2>>k;
		for(i = 1; i <= p2 && i <= 10000; i++)
			a[p1 * i] = 1;
		for(i = 1; i <= p1 && i <= 10000; i++)
		{
			j = p2 * i;
			if(a[j] == 0)
				a[j] = 2;
			else
				a[j] = 3;
		}
		j = 0;
		x = p1 * p2;
		if(x >= 100000000)
			x = 100000000;
		for(i = min(p1, p2); i <= x; i++)
		{
			if(a[i] == 0)
				continue;
			b[j] = a[i];
			j++;
		}
		x = j;
		////↑整理出数组b，1代表p1的倍数，2是p2的倍数，3是p1,p2的公倍数，并过滤掉无用的值 
///////////////////////////////////////////////////////////// 
/*		for(i = 0; i < x; i++)
			cout<<b[i]<<" ";
		cout<<endl;*/ 
		int l;
		i = 0;
		l = 1;
		while(l < k && i < x)
		{
			i++;
			if(b[i] != b[i - 1] && b[i] != 3)
			{
				l = 1;
				continue;
			}
			if(b[i] == b[i - 1] && b[i] != 3)
			{
				l++;
				continue;
			}
			if(b[i] == 3)
			{
				if(b[i - 1] == b[i + 1])
				{
					l = 1;
					continue;
				}
				if(l == k - 1)
				{
					b[i] = b[i + 1];
					l = 1;
					continue;
				}
			}
		}
		if(l != k)
			cout<<"No";
		else
			cout<<"Yes";
		cout<<endl;
	}
	return 0;
}
