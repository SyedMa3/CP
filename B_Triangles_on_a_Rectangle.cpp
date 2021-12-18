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
        int w,h;
        cin >> w >> h;

        vvl a(4);
        vi k(4);
        rep(4)
        {
            cin >> k[i];
            repc(j,k[i])
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }

        ll a1 = (a[0][k[0]-1] - a[0][0])*h;
        ll a2 = (a[1][k[1]-1] -a[1][0])*h;
        ll a3 = (a[2][k[2]-1] - a[2][0]) * w;
        ll a4 = (a[3][k[3]-1] - a[3][0]) * w;

        ll ans = max({a1,a2,a3,a4});

        cout << ans << endl;
        
    }

    return 0;
}