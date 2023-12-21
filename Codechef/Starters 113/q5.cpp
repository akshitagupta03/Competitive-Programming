#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define rep(x, start, end) for(ll x = start; x < end; x++)
#define rrep(x, start, end) for(ll x = start; x >= end; x--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

//-------------------------- Debug -------------------------/
#ifndef ONLINE_JUDGE
#else
#define debug(x)
#endif
 
void solve()
{
    ll n, m;
    cin >> n >> m;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll maxi = a[n-1];
    ll mini = a[0];

    ll op = 0;
    for(int i=0; i<n; i++)
    {
        op += maxi - a[i];
    }

    ll count = ceil(((op)*(1.0))/(m));
    ll ans = max(count, maxi-mini);
    p(ans);
}
 
//--------------------------- MAIN -------------------------/
int main() {
    ios_base::sync_with_stdio(false); // to make input output faster
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
