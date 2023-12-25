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
    int mat[10][10] =  {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};

    ll score = 0;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            char ch;
            cin >> ch;

            if(ch == 'X')
            {
                score += mat[i][j];
            }
        }
    }
    p(score);
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