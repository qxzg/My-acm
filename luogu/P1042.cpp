#include <iostream>
#include <cmath>

using namespace std;

char s[62501] = {};

int main(int argc, char** argv)
{
	int l,n,i;
	int w = 0,d = 0;
	n = 0;
	while(cin>>s[n] && s[n] != 'E')	n++;
	for(i = 0; i < n; i++)
	{
		if(s[i] == 'W')	w++;
		else	d++;
		if((w >= 11 && abs(w - d) >= 2) || (d >= 11 && abs(w - d) >= 2))
		{
			cout<<w<<":"<<d<<endl;
			w = d = 0;
		}
	}
	cout<<w<<":"<<d<<endl<<endl;
	d = w = 0;
	for(i = 0; i < n; i++)
	{
		if(s[i] == 'W')	w++;
		else	d++;
		if((w >= 21 && abs(w - d) >= 2) || (d >= 21 && abs(w - d) >= 2))
		{
			cout<<w<<":"<<d<<endl;
			w = d = 0;
		}
	}
	cout<<w<<":"<<d<<endl;
	return 0;
}

