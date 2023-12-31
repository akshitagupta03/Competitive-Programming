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
    ll neg = 0, pos = 0, zero = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < 0)
        {
            neg++;
        }
        else if(a[i] == 0)
        {
            zero++;
        }
        else
        {
            pos++;
        }
    }

    if(zero >= 1)
    {
        p(0);
        return;
    }
    
    if(neg == 0 || neg % 2 == 0)
    {
        p(1);
        cout << 1 << " " << 0 << endl;
        return;
    }
    p(0);
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