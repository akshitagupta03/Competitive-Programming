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
#define debug(x) cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    ll one = 0;
    ll zero = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            zero++;
        }
        else if(a[i] == 1)
        {
            one++;
        }
    }

    if(zero < one)
    {
        p(zero);
    }
    else
    {
        p(one);
    }
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
