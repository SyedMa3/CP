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
    while (t--)
    {
        int n;
        cin >> n;

        int ans = 0;

        int l = 0, r=n-1;
        vi a(n);
        vl lsum(n,0), rsum(n,0);

        rep(n)
        {
            cin >> a[i];
            if(i == 0)
            {
                lsum[i] = a[i];
            }
            else
            {
                lsum[i] = lsum[i-1] + a[i];
            }
        }
        rsum[n-1] = a[n-1];
        for(int i = n-2;i>=0;--i)
        {
            rsum[i] = rsum[i+1] + a[i];
        }

        while(l<r)
        {
            if(lsum[l] < rsum[r])
            {
                ++l;
            }
            else if(lsum[l] > rsum[r])
            {
                --r;
            }
            else
            {
                ans = l+1 + (n-r);
                ++l;
                --r;
            }
        }

        cout << ans << endl;
    }

    return 0;
}