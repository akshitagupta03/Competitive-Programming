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

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
void solve()
{
    int n;
    cin >> n;

    vi a(n);
    ll mini = INT_MAX;
    ll index = 0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] < mini)
        {
            mini = a[i];
            index = i;
        }
    }
    a[index]++;

    ll mul = 1;
    for(int i=0; i<n; i++)
    {
        mul *= a[i];
    }
    p(mul);
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