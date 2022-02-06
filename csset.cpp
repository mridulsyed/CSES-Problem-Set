#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >>n;

    {
        for(ll i=1; i<=n; i++)
        {
            cout<<((i-1)*(i+4)*(i*i-3*i+4))/2<<"\n";
        }
    }
}

