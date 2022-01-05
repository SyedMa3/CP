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

    vector<bool> pr(1e6, true);

    pr[0] = pr[1] = false;

    for (int i = 2; i * i <= 1e6; ++i)
    {
        if (pr[i])
        {
            for (int j = i * i; j <= 1e6; j += i)
                pr[j] = false;
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, e;
        cin >> n >> e;

        vl a(n);

        rep(n)
        {
            cin >> a[i];
        }
        ll ans = 0;

        rep(n)
        {
            if (pr[a[i]])
            {
                ll l = 0, r = 0;

                for (ll x = i - e; x >= 0; x -= e)
                {
                    if (a[x] == 1)
                    {
                        ++l;
                    }
                    else
                    {
                        break;
                    }
                }

                for (ll x = i + e; x < n; x += e)
                {
                    if (a[x] == 1)
                        ++r;
                    else
                        break;
                }

                if(l == 0)
                    ans += r;
                else if(r == 0)
                    ans += l;
                else
                    ans += (l+1)*(r+1) - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}