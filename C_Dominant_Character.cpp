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

        string s;
        cin >> s;

        vi a(n), b(n), c(n);
        int ca, cb, cc;
        ca = cb = cc = 0;
        int flag = 0;

        rep(n)
        {
            if (s[i] == 'a')
            {
                ++ca;
            }
            else if (s[i] == 'b')
            {
                ++cb;
            }
            else
            {
                ++cc;
            }
            a[i] = ca;
            b[i] = cb;
            c[i] = cc;
        }

        int ans=1e9;

        rep(n)
        {
            int fa,fb,fc;

            if(i==0)
            {
                fa=fb=fc=0;
            }
            else
            {
                fa = a[i-1];
                fb = b[i-1];
                fc = c[i-1];
            }

            for(int j=i+1; j<min(n,i+7); ++j)
            {
                if(a[j]-fa > b[j]-fb and a[j]-fa > c[j]-fc)
                    ans = min(ans, j-i+1);
            }
        }

        if(ans == 1e9)
            ans = -1;

        cout << ans << endl;

        // int l = 0, r = n - 1;

        // int lp = 0, rp = n - 1;

        // while (l <= r)
        // {
        //     while (a[lp + 1] == a[lp])
        //     {
        //         ++l;
        //     }
        //     while (a[rp] == a[rp - 1])
        //     {
        //         --r;
        //     }

        //     l = lp;
        //     r = rp;
        // }
    }

    return 0;
}