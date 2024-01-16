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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;

    vi arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        ll time;
        if(i == 0)
        {
            time = arr[i] - 0;
        }
        else
        {
            time = arr[i] - arr[i-1];
        }
        // cout << "time: " << time << endl;

        if(a*time < b)
        {
            f -= a*time;
        }
        else if(a*time >= b)
        {
            f -= b;
        }
        // cout << "f: " << f << endl;
        if(f == 0)
        {
            pn;
            return;
        }
    }

    if(f >= 0)
    {
        py;
        return;
    }
    pn;
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