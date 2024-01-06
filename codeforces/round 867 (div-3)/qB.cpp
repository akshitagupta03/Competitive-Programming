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
    sort(a.begin(), a.end());
    
    ll num1 = a[0]*a[1];
    ll num2 = a[n-1]*a[n-2];

    ll ans = max(num1, num2);
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