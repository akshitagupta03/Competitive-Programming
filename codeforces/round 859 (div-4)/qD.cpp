#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

 
void solve()
{
    ll n, q;
    cin >> n >> q;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(i > 0)
        {
            a[i] += a[i-1];
        }   
    }

    for(int i=0; i<q; i++)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        ll sum = a[n-1] + k*(r-l+1) - a[r-1];
        if(l != 1)
        {
            sum += a[l-2];
        }

        if(sum % 2 == 0)
        {
            pn;
        }
        else
        {
            py;
        }
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