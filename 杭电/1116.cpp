////////////////////System Comment////////////////////
////Welcome to Hangzhou Dianzi University Online Judge
////http://acm.hdu.edu.cn
//////////////////////////////////////////////////////
////Username: nicainicai
////Nickname: Äã²Â
////Run ID: 
////Submit time: 2016-01-27 20:59:54
////Compiler: GUN C++
//////////////////////////////////////////////////////
////Problem ID: 1116
////Problem Title: 
////Run result: Accept
////Run time:1185MS
////Run memory:1936KB
//////////////////System Comment End//////////////////
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

const int maxn = 1<<5;
int set[maxn], in[maxn], out[maxn];

int find(int x)
{
	if(set[x] == x) 
       return x;
	else 
       return find(set[x]);
}

int main()
{
	int t, n, a, b, nset, i, nc, nr, e;
	cin>>t;
	while(t--)
    {
		string t;
		cin>>n;
		for(i = 1; i <= maxn; i++) 
           set[i] = i;
		memset(in, 0, sizeof(in));
		memset(out, 0, sizeof(out));
		for(i = 1; i <= n; i++)
        {
			t.clear();
			cin>>t;
			a = t[0] - 'a' + 1;
			b = t[t.size() - 1] - 'a' + 1;
			if(find(a) != find(b))
               set[b] = a; 
			in[a]++;
			out[b]++;
		}
		nset = 0;
		for(i = 1; i <= 26; i++)
			if(set[i] == i && (in[i] || out[i])) nset++;
		if(nset > 1) 
        {
           cout<<"The door cannot be opened.\n";
           continue;
        }
		nc = nr = e = 0;
		for(i = 1; i <= 26; i++)
        {
			if(in[i] - out[i] == 1) 
               nr++;
			else 
               if(out[i] - in[i] == 1) 
                  nc++;
            else 
               if(in[i] != out[i]) 
                  e++;
		}
		if(nr == 1 && nc == 1 && e == 0) 
           cout<<"Ordering is possible.\n";
		else 
           if(nr == 0 && nc == 0 && e == 0) 
              cout<<"Ordering is possible.\n";
		else 
           cout<<"The door cannot be opened.\n";
	}
	system("PAUSE");
	return 0;
}
