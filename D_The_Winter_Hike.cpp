#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
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
    while (t--)
    {
        int n;
        cin >> n;

        vvl a(2 * n, vl(2 * n));

        ll cost = 0;
        rep(2 * n)
        {
            repc(j, 2 * n)
            {
                cin >> a[i][j];
                if (i > n - 1 and j > n - 1)
                    cost += a[i][j];
            }
        }

        ll x1;

        x1 = min({a[n][0], a[n][n - 1], a[0][n], a[n - 1][n], a[2 * n - 1][0], a[n-1][2*n-1], a[0][2*n-1], a[2 * n - 1][n - 1]});

        cost = cost + x1;

        cout << cost << endl;
    }

    return 0;
}