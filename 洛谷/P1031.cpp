#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int a[101] = {};
	int n,i,m = 0,p = 0;
	cin>>n;
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
		p += a[i];
	}
	p /= n;
	for(i = 0; i < n; i++)
		a[i] -= p;
	for(i = 0; i < n; i++)
	{
		if(a[i] == 0)
			continue;
		a[i+1] += a[i];
		m++;
	}
	cout<<m;
	return 0;
}

