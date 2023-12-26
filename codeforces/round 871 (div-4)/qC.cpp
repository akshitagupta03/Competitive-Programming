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

    string s;
    cin >> s;

    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        if(m.find(s[i]) != m.end())
        {
            if((m[s[i]] % 2 == 0) && (i % 2 != 0))
            {
                pn;
                return;
            }
            if((m[s[i]] % 2 != 0) && (i % 2 == 0))
            {
                pn;
                return;
            }
        }
        m[s[i]] = i;
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