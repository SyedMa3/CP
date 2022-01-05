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
        ll k, x;
        cin >> k >> x;
        ll ans;

        ll l = 1, r = 2 * k - 1;

        ll res = 2*k - 1;

        while(l<=r)
        {
            ll m = (l+r)/2;

            if(m<=k)
            {
                if(m*(m+1)/2 >= x)
                {    res = m;
                    r = m-1;
                }else
                    l = m+1;
            }
            else
            {
                if(k*(k+1)/2 + (k-1)*(k)/2 - (2*k - 1 - m)*(2*k - m)/2 >= x)
                {
                    res = m;
                    r = m-1;
                }else
                    l = m+1;
            }
        }

        cout << res << endl;
    }

    return 0;
}