#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    long long int n,m,i,j,k,min;
    long long int a[1005] = {};
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    m = 0;
    while(n > 1)
    {
        min = a[0]+ a[n - 1];
        k = -1;
        for(i = 0; i < n - 1; i++)
            if(a[i] + a[i + 1] < min)
            {
                k = i;
                min = a[i] + a[i + 1];
            }
        if(k == -1)
        {
            m += a[0] + a[n - 1];
            a[0] += a[n - 1];
        }
        else
        {
            m += a[k] + a[k + 1];
            a[k] += a[k + 1];
            for(i = k + 1; i < n; i++)
                a[i] = a[i + 1];
        }
        a[n - 1] = 0;
        n--;
    }
    cout<<m;
    return 0;
}