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
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> m;
    for(int i=0; i<n; i++)
    {
        m[s[i]]++;
    }

    int maxi = INT_MIN;
    for(auto i:m)
    {
        maxi = max(maxi, i.second);
    }

    if(n % 2 == 0)
    {
        if(maxi <= n/2)
        {
            p(0);
            return;
        }
        else
        {
            ll ans = maxi - (n-maxi);
            p(ans);
        }
    }
    else
    {
        int len = max(0, maxi - (n-maxi));
        if(len == 0)
        {
            p(1);
            return;
        }
        else
        {
            ll ans = maxi - (n-maxi);
            p(ans);
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