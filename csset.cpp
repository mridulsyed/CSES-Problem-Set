#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t; cin >> t;

   while(t--)
    {
        ll y,x; cin >> y >> x;

        ll mx=max(y,x);
        ll sq = mx*mx;
        ll eql = sq-(mx-1);

        if(y==x)
            cout<<eql<<"\n";
        else
        {
            if(mx%2)
            {
                if(y>x)
                    cout<<eql-abs(y-x)<<"\n";
                else
                    cout<<eql+abs(y-x)<<"\n";
            }
            else
            {
                if(y>x)
                    cout<<eql+abs(y-x)<<"\n";
                else
                    cout<<eql-abs(y-x)<<"\n";
            }
        }
    }
}

