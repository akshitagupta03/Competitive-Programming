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
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }   

    vi left(n), right(n);
    for(int i=0; i<n-1; i++)
    {
        right[i+1] = right[i];
        if(i == 0 || a[i] - a[i-1] > a[i+1] - a[i])
        {
            right[i+1]++;
        }
        else
        {
            right[i+1] += a[i+1] - a[i];
        }
    }

    for(int i=n-1; i>0; i--)
    {
        left[i-1] = left[i];
        if(i == n-1 || a[i] - a[i-1] < a[i+1] - a[i])
        {
            left[i-1]++;
        }
        else
        {
            left[i-1] += a[i] - a[i-1];
        }
    }

    ll m;
    cin >> m;

    for(int i=0; i<m; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--, y--;

        if(x < y)
        {
            cout << right[y] - right[x] << endl;
        }
        else
        {
            cout << left[y] - left[x] << endl;
        }
    }
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