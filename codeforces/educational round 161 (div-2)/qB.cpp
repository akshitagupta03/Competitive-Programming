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

ll three(ll n)
{
    return (n*(n-1)*(n-2))/6;
}

ll two(ll n)
{
    return (n*(n-1))/2;
}

void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    vi count(n+1, 0);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }

    ll ans = 0;
    ll cnt = 0;
    for(int i=0; i<=n; i++)
    {
        if(count[i] >= 3)
        {
            ans += three(count[i]);
        }
        if(count[i] >= 2)
        {
            ans += two(count[i])*cnt;
        }
        cnt += count[i];
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