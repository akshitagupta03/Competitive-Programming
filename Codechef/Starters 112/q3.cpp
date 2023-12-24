#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define vi vector<ll>
#define rep(x, start, end) for(ll x = start; x < end; x++)
#define rrep(x, start, end) for(ll x = start; x >= end; x--)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define p(x) cout << x << endl
#define parr(arr) rep(i, 0, arr.size()) cout << arr[i] << " "; cout << endl

//-------------------------- Debug -------------------------/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    for(int i=0; i<n; i++)
    {
        if(i == n-1 && s[i] == '1')
        {
            py;
        }
        else
        {
            if(s[i] == '0')
            {
                while(i < n)
                {
                    pn;
                    i++;
                }
            }
            else
            {
                cout << "IDK" << endl;
            }
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