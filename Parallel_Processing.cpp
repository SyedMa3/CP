#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define fore(i, x1, x2) for (ll i = x1; i < x2; ++i)
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

        vi a(n);
        vl asum(n, 0);

        rep(n)
        {
            cin >> a[i];
            if(i == 0)
            {
                asum[i] = a[i];
            }
            else
            {
                asum[i] = asum[i-1] + a[i];
            }
        }

        if(n == 1)
        {
            cout << a[0] << endl;
            continue;
        }

        vl lsum(n);
        lsum[n-1] = a[n-1];

        for(int i=n-2; i>=0; --i)
        {
            lsum[i] = lsum[i+1] + a[i];
        }
        int l = -1;

        ll m = INT_MAX;
        rep(n-1)
        {
            if(abs(lsum[i+1] - asum[i]) < m)
            {
                m = abs(lsum[i+1] - asum[i]);
                l = i;
            }
        }
        ll ans;

        ans = max(lsum[l+1], asum[l]);

        

        cout << ans << endl;
    }

    return 0;
}