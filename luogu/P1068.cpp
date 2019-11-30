#include <iostream>
#include <cmath>

using namespace std;

int a[5002][2] = {};

int main(int argc, char** argv)
{
	int n,m,x,p,i,j;
	cin>>n>>m;
	for(i = 0; i < n; i++)
	{
		cin>>a[i][0]>>a[i][1];
	}
	x = int(m * 1.5);
	for(i = 0; i < n; i++)
	{
		for(j = n - 1; j >= i; j--)
		{
			if(a[i][1] < a[j][1])
			{
				swap(a[i][1], a[j][1]);
				swap(a[i][0], a[j][0]);
				continue;
			}
			if(a[i][1] == a[j][1] && a[i][0] > a[j][0])
			{
				swap(a[i][1], a[j][1]);
				swap(a[i][0], a[j][0]);
				continue;
			}
		}
	}
	//x--;
//	cout<<x<<endl;
	while(a[x][1] == a[x - 1][1])
		x++;
	cout<<a[x - 1][1]<<" "<<x<<endl;
	for(i = 0; i < x; i++)
		cout<<a[i][0]<<" "<<a[i][1]<<endl;
	return 0;
}

