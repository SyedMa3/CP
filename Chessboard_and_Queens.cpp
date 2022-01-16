#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define fore(i,x1,x2) for(ll i=x1; i<x2; ++i)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sortall(x) sort(all(x))
#define tr(it, x) for (auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it +)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const unsigned int M = 1000000007;

int col[7] = {0};
int ld[15] = {0};
int rd[15] = {0};
char m[8][8];

ll ans = 0;

void solve(int j)
{
    if(j == 8)
    {
        ++ans;
        return;
    }
    rep(8)
    {
        if(m[j][i] == '*')
            continue;

        if(col[i] == 0 and ld[j-i + 7] == 0 and rd[j+i] == 0)
        {
            col[i] = 1;
            ld[j-i + 7] = 1;
            rd[j+i] = 1;

            solve(j+1);

            col[i] = 0;
            ld[j-i + 7] = 0;
            rd[j+i] = 0;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        rep(8)
        {
            repc(j,8)
            {
                cin >> m[i][j];
            }
        }

        solve(0);

        cout << ans << endl;

    }

    return 0;
}