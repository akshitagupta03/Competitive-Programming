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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i=2; i <= n/2; i++)
    {
        if (n%i == 0)
            return false;
    }
 
    return true;
}
 
void solve()
{
    ll h;
    cin >> h;

    ll count = 0;
    int i = 1;
    
    while(h > 0)
    {
        if(isPrime(h))
        {
            h = 0;
            count++;
            break;
        }
        h -= i;
        i = i*2;
        count++;
    }

    if(h != 0)
    {
        p(-1);
    }
    else if(h == 0)
    {
        p(count);
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
