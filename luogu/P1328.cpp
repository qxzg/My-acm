#include <iostream>
#include <cstdio>

using namespace std;

int a[202],b[202],pa = 0,pb = 0;
int vs[5][5] = {{0,0,1,1,0},{1,0,0,1,0},{0,1,0,0,1},{0,0,1,0,1},{1,1,0,0,0}};


int main(int argc, char** argv) {
	int n,na,nb,i;
	cin>>n>>na>>nb;
	for(i = 0; i < na; i++)   cin>>a[i];
	for(i = 0; i < nb; i++)   cin>>b[i];
	for(i = 0; i < n; i++)
	{
	    pa+=vs[a[i%na]][b[i%nb]];
	    pb+=vs[b[i%nb]][a[i%na]];
	}
	cout<<pa<<" "<<pb;
	return 0;
}
