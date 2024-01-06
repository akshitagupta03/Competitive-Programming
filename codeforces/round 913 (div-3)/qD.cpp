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

bool check(int mid, vector<pair<int, int>> &v)
{
    int x = 0, y = 0;
    for(int i=0; i<v.size(); i++)
    {
        x = x - mid;
        y = y + mid;

        x = max(x, v[i].first);
        y = min(y, v[i].second);

        if(y < x)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    vector<pair<int, int>> v;
    ll h = 0;
    for(int i=0; i<n; i++)
    {
        ll l, r;
        cin >> l >> r;

        v.push_back({l, r});
        h = max(h, r);
    }

    int l = 0;
    int ans = 0;
    while(l <= h)
    {
        int mid = l + (h-l)/2;
        
        if(check(mid, v))
        {
            ans = mid;
            h = mid-1;
        }
        else
        {
            l = mid+1;
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