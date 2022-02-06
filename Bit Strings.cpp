#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n; cin >>n;
    ll ans=1;
    //2*2*2

    for(int i=1; i<=n; ++i)
    {
        ans=(ans*2)%((int)1e9+7);
    }

    cout<<ans;
}

