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
    ll n, m;
    cin >> n >> m;

    string x;
    cin >> x;

    string s;
    cin >> s;

    ll count = 0;

    bool flag = x.find(s) != string::npos;
    // cout << "flag: " << flag << endl;

    if(x.find(s) != string::npos)
    {
        p(0);
        return;
    }

    while(x.length() <= 25 && x.find(s) == string::npos)
    {
        x += x;
        count++;
    }

    if(x.find(s) == string::npos)
    {
        p(-1);
        return;
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