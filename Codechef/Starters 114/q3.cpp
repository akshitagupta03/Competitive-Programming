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

    string ans(n, 'a');
    ll count = n/2 + 1;

    for(int i=0; i<n; i++)
    {
        if(s[i] == 'R')
        {
            count--;
            ans[i] = 'P';
        }
    }

    for(int j=n-1; j>=0; j--)
    {
        if(count > 0)
        {
            if(s[j] == 'S')
            {
                ans[j] = 'R';
                count--;
            }
            else if(s[j] == 'P')
            {
                ans[j] = 'S';
                count--;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(ans[i] == 'a')
        {
            ans[i] = 'P';
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