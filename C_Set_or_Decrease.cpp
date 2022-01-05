#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (ll i = 0; i < n; ++i)
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
typedef pair<ll, ll> pii;
typedef pair<ll, ll> pl;
typedef vector<ll> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const unsigned ll M = 1000000007;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;

        vl a(n);

        rep(n)
        {
            cin >> a[i];
        }

        sortall(a);

        vl s(n);
        s[0] = a[0];
        for(ll i=1;i<n; ++i)
        {
            s[i] = a[i] + s[i-1];
        }

        ll ans = 1e18;

        rep(n)
        {
            ll x = a[0] - (ll)floor((float)(k-s[n-i-1]+a[0])/(i+1));

            ans = min(ans, i + max(0LL, x));
        }

        cout << ans << endl;
    }

    return 0;
}