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

    ll num = n*(n-1);
    num = num/2;
    vi b(num);

    map<ll, ll> m;
    ll maxi = INT_MIN;

    for(int i=0; i<num; i++)
    {
        cin >> b[i];
        m[b[i]]++;
        maxi = max(maxi, b[i]);
    }   

    ll x = n-1;
    for(auto i:m)
    {
        cout << i.first << " ";
        n--;
        if(i.second == x)
        {
            x--;
        }
        else
        {
            i.second -= x;
            x--;
            while(i.second != 0)
            {
                cout << i.first << " ";
                n--;
                i.second -= x;
                x--;
            }
        }
    }

    while(n != 0)
    {
        cout << maxi << " ";
        n--;
    }
    cout << endl;
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