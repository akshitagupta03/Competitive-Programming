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
    ll n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    
    ll count = 0;
    for(int i=0; i<n-1; i++)
    {
        count = 0;
        if(a[i+1] < a[i])
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[j] < a[i])
                {
                    a[j] = -1;
                }
            }
        }
    }

    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == -1)
        {
            ans++;
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