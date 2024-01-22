#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    bool flag = false;
    for(int i=0; i<n; i++)
    {
        if(c[i] != a[i] && c[i] != b[i])
        {
            flag = true;
        }
    }

    if(flag)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}