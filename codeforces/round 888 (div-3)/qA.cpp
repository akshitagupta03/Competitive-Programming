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
    ll n, m, k, height;
    cin >> n >> m >> k >> height;

    vi arr(n);
    ll count = 0;
    ll mini = k;
    ll maxi = (m-1)*k;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        ll num = abs(arr[i] - height);
        
        if(num >= mini && num <= maxi)
        {
            if(num % k == 0){
                count++;
            }
        }
    }

    p(count);
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