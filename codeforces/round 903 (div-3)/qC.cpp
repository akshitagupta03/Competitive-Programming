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

    char matrix[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    ll count = 0;
    for(int i=0; i<n/2; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            char a = matrix[i][j];
            char b = matrix[j][n-i-1];
            char c = matrix[n-i-1][n-j-1];
            char d = matrix[n-j-1][i];

            char maxi = max({a, b, c, d});
            count += maxi - a;
            count += maxi - b;
            count += maxi - c;
            count += maxi - d;
        }
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