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
    vi a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
 
    if(a[0] == a[1] && a[1] == a[2])
    {
        py;
        return;
    }
    ll count = 0;
    if(a[1] % a[0] != 0 || a[2] % a[0] != 0)
    {
        pn;
        return;
    }
    if(a[0] != a[1])
    {
        count += a[1]/a[0] - 1;
    }
    count += a[2]/a[0] - 1;
 
    if(count <= 3) py;
    else pn;
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