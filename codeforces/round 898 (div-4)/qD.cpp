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
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int count = 0;

    int i=0;
    while(s[i] == 'W'){
        i++;
    }

    while(i < n){
        if(s[i] == 'W'){
            i++;
        }
        else
        {
            count++;
            i += k;
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