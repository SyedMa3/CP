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

    int n,q;
    cin >> n >> q;

    vi a(n);
    rep(n)
    {
        cin >> a[i];
    }

    sortall(a);
    vl c(n,0);
    c[0] = a[0];
    fore(i,1,n)
    {
        c[i] = c[i-1] + a[i];
    }

    while (q--)
    {
        int x,y;
        cin >> x >> y;

        int z = n-x;
        ll ans = 0;
        if(z == 0)
        {
            ans = c[z+y-1];
        }
        else
        {
            ans = c[z+y-1] - c[z-1];
        }

        cout << ans << endl;
    }

    return 0;
}