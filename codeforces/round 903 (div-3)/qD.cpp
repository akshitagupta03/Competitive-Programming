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

void primeFactors(int n, unordered_map<int, int> &m) 
{ 
    // Print the number of 2s that divide n 
    while (n % 2 == 0) 
    { 
        m[2]++;
        n = n/2; 
    } 
 
    // n must be odd at this point. So we can skip 
    // one element (Note i = i +2) 
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        // While i divides n, print i and divide n 
        while (n % i == 0) 
        { 
            m[i]++;
            n = n/i; 
        } 
    } 
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2 
    if (n > 2) 
        m[n]++;
} 

void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    unordered_map<int, int> m;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        primeFactors(a[i], m);
    }

    for(auto i:m)
    {
        if(i.second % n != 0)
        {
            pn;
            return;
        }
    }
    py;
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