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
    ll n, k;
    cin >> n >> k;

    vi b(n);
    ll mul = 1;
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        mul = mul*b[i];
    }

    if(2023 % mul == 0)
    {
        py;
        cout << 2023/mul << " ";
        k--;
        while(k--)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        pn;
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