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

    string s;
    cin >> s;

    ll neg = 0, pos = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '+')
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }

    ll ans = 0;
    if(pos > neg)
    {
        ans = pos - neg;
    }
    else if(neg > pos)
    {
        ans = neg - pos;
    }
    else
    {
        ans = 0;
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