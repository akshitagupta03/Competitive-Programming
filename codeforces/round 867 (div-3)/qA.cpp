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
    ll n, t;
    cin >> n >> t;

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        a[i] += i;
    }

    vi b(n);
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }

    ll entertain = 0;
    ll index = -1;

    for(int i=0; i<n; i++)
    {
        if(a[i] <= t)
        {
            if(b[i] > entertain)
            {
                index = i;
                entertain = b[i];
            }
        }
    }
    if(index == -1)
    {
        p(-1);
        return;
    }
    p(index+1);
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