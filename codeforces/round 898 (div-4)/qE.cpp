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
    ll n, x;
    cin >> n >> x;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    ll low = 0, high = 10e9+1;
    ll ans = -1;

    while(low <= high)
    {
        ll mid = low + (high-low)/2;
        ll sum = 0;

        for(int i=0; i<n; i++)
        {
            if(mid > a[i])
            {
                sum += (mid-a[i]);
            }
        }
        if(sum <= x)
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
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