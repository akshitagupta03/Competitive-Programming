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

    if(n % 2 != 0)
    {
        if(n == 1)
        {
            p(1);
            return;
        }
        else
        {
            p(-1);
            return;
        }
    }

    vi even, odd;
    even.push_back(n);
    odd.push_back(n-1);

    for(int i=2; i<n; i+=2)
    {
        even.push_back(i);
    }
    for(int i=n-3; i>=1; i-=2)
    {
        odd.push_back(i);
    }

    for(int i=0; i<even.size(); i++)
    {
        cout << even[i] << " " << odd[i] << " ";
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