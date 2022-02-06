#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    string s;
    cin >> s;
    int ans=1, c=0;

    char dna='A';

    for(char ch : s)
    {
        if(ch==dna)
        {
            ++c;
            ans = max(c,ans);
        }
        else
        {
            dna=ch;
            c=1;
        }

    }

    cout << ans;

}

