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

    vi temp = a;
    sort(temp.begin(), temp.end());

    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 0 && temp[i] % 2 != 0)
        {
            pn;
            return;
        }
        if(a[i] % 2 != 0 && temp[i] % 2 == 0)
        {
            pn;
            return;
        }
    }
    py;
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