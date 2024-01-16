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
    ll n, m;
    cin >> n >> m;

    deque<int> a(n);
    for(int i=0; i<n; i++)
    {
        ll n;
        cin >> n;
        a.push_back(n);
    }
    sort(all(a));
    while(a.front() == 0 && !a.empty())
    {
        a.pop_front();
    }
    // for(auto i:a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    deque<int> b(m);
    for(int i=0; i<m; i++)
    {
        ll n;
        cin >> n;
        b.push_back(n);
    }
    sort(all(b), greater<int>());
    while(b.back() == 0 && !b.empty())
    {
        b.pop_back();
    }
    
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        if(abs(b.back() - a.back()) < abs(b.front() - a.front()))
        {
            sum += abs(b.front() - a.front());
            a.pop_front(), b.pop_front();
        }
        else if(abs(b.back() - a.back()) >= abs(b.front() - a.front()))
        {
            sum += abs(b.back() - a.back());
            a.pop_back(), b.pop_back();
        }
    }
    p(sum);
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