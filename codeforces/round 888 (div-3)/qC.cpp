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

    vi c(n);
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }

    ll first = c[0];
    unordered_map<int, int> m;
    ll count = 0;
    ll index = 0;
    for(int i=0; i<n; i++)
    {
        if(c[i] == first && count < k)
        {
            m[c[i]]++;
            count++;
            index = i;
            if(count == k)
            {
                break;
            }
        }
    }

    ll last = c[n-1];
    count = 0;

    for(int j=index+1; j<n; j++)
    {
        if(c[j] == last && count < k)
        {
            m[c[j]]++;
            count++;
            if(count == k)
            {
                break;
            }
        }
    }

    for(auto i:m)
    {
        if(first == last && m[i.first] >= k)
        {
            py;
            return;
        }
        if(i.second % k != 0 && i.second != 0)
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