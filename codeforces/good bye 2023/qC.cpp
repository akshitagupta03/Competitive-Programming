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

    vi a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    ll odd = 0;
    ll sum = 0;
    ll even = 0;

    for(int i=0; i<n; i++)
    {
        sum += a[i];
        odd += a[i] % 2;
        even += (a[i] % 2 == 0);

        if(i == 0)
        {
            cout << a[0] << " ";
        }
        else
        {   
            if(odd % 3 != 1)
            {
                cout << sum - odd/3 << " ";
            }
            else if(odd % 3 == 1)
            {
                cout << sum - odd/3 - 1 << " ";
            }
        }
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