#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s; cin >> s;
    vector<string> v;

    sort(s.begin(), s.end());

    do{
        v.push_back(s);

    }while(next_permutation(s.begin(), s.end()));

    cout<<v.size()<<"\n";
    for(string val:v)
        cout<<val<<"\n";
}

