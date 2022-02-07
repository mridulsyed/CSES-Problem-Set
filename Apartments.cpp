#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n,m,k; cin>>n>>m>>k;

    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<n; ++i)
    {
        int x; cin>>x;
        v1.push_back(x);
    }
    for(int i=0; i<m; ++i)
    {
        int x; cin>>x;
        v2.push_back(x);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    //45 60 60 60
    //30 60 75
    int ans=0;
    for(int i=0, j=0; i<n; ++i)
    {
        while(j<m && v2[j]<v1[i]-k)
            ++j;
        if(j<m && v2[j]<=v1[i]+k)
            ++j, ++ans;
    }

    cout<<ans;

}

