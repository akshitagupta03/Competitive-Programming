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
    ll n, k;
    cin >> n >> k;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    vi h(n);
    for(int i=0; i<n; i++)
    {
        cin >> h[i];
    }

    ll len = 0;
    ll ans = 0;
    ll sum = 0;
    
    int i=0, j=0;

    while(i < n)
    {
        if(i > 0 && (h[i-1] % h[i] != 0))
        {
            sum = 0;
            len = 0;
            j = i;
        }
        sum += a[i];
        while(j <= i && sum > k)
        {
            sum -= a[j];
            j++;
        }
        len = i-j+1;
        ans = max(ans, len);
        i++;
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