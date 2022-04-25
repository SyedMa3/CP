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

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    int tc = 1;
    while (tc <= t)
    {
        int n,p;
        cin >> n >> p;

        ll counter = 0;

        vector<vector<int>> a(n, vector<int>(p,0));

        rep(n)
        {
            repc(j,p)
            {
                cin >> a[i][j];
            }
            
            sort(all(a[i]));
        }
        ll ans = 0;
        rep(n)
        {
            ll m = abs(counter - a[i][0]);
            ll temp = a[i][0];
            fore(j,1,p)
            {
                ans += abs(a[i][j] - a[i][j-1]);
                if(m > abs(counter - a[i][j]))
                {
                    m = min(m, abs(counter - a[i][j]));
                    temp = a[i][j];
                }
            }
            ans += m;
            if(abs(temp - a[i][0]) > abs(temp - a[i][p-1]))
            {
                counter = a[i][0];
                ans += abs(temp - a[i][p-1]);
            }
            else
            {
                counter = a[i][p-1];
                ans += abs(temp - a[i][0]);
            }
            // counter = temp;
        }

        cout << ans << endl;
        ++tc;
    }

    return 0;
}