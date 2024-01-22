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

    vi a(n-1);
    vi temp(n-1);
    for(int i=0; i<n-1; i++)
    {
        cin >> a[i];
        temp[0] = a[0];
        if(i > 0)
        {
            temp[i] = a[i] - a[i-1];
        }
    }
    
    unordered_map<int, int> m;
    vi missing;
    
    for(int i=0; i<n-1; i++)
    {
        m[temp[i]]++;
    }
    for(int i=1; i<=n; i++)
    {
        if(m.find(i) == m.end())
        {
            missing.push_back(i);
        }
    }

    ll odd = 0;
    ll oddCount = 0;
    for(int i=0; i<n-1; i++)
    {
        if(temp[i] > n)
        {
            odd = temp[i];
            oddCount++;
        }
    }

    for(auto i:m)
    {
        if(i.second > 1)
        {
            odd = i.first;
            oddCount++;
        }
    }

    if(oddCount > 1)
    {
        pn;
        return;
    }

    ll sum = 0;
    for(int i=0; i<missing.size(); i++)
    {
        sum += missing[i];
    }

    for(auto i:m)
    {
        if(sum == i.first && i.second == 2)
        {
            py;
            return;
        }
    }

    if(missing.size() == 1 && missing[0] <= n)
    {
        py;
        return;
    }

    if(sum == odd)
    {
        py;
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