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
    ll side = 0;

    vi a(4), b(4);
    ll x1, y1;
    ll x2, y2;

    for(int i=0; i<4; i++)
    {
        cin >> a[i] >> b[i];
        x1 = a[0];
        y1 = b[0];

        if(a[i] == x1)
        {
            side = b[i] - y1;
        }
    }
    p(side*side);
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