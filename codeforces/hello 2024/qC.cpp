#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define all(x) (x).begin(),(x).end()
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    ll high = n+1;
    ll low = n+1;

    for(int i=0; i<n; i++)
    {
        if(a[i] > max(high, low))
        {
            ans++;
            if(low <= high)
            {
                low = a[i];
            }
            else
            {
                high = a[i];
            }
        }
        else if(low <= high && low >= a[i])
        {
            low = a[i];
        }
        else if(low >= high && high >= a[i])
        {
            high = a[i];
        }
        else if(low >= a[i])
        {
            low = a[i];
        }
        else if(high >= a[i])
        {
            high = a[i];
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