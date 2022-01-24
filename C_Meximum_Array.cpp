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

        rep(n)
        {
            cin >> a[i];
        }

        vi m(n);
        vi f(n + 1);

        int mex = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            f[a[i]]++;

            if (mex == a[i])
            {
                while (f[mex])
                {
                    ++mex;
                }
            }

            m[i] = mex;
        }

        vi ans;
        mex = 0;
        int l = 0;
        map<int,int> m1;
        while (l < n)
        {
            m1.clear();
            int tem = m[l];
            if(mex == tem)
            {
                ans.pb(mex);
                ++l;
                continue;
            }
            while (mex != tem)
            {
                m1[a[l]]++;
                if (mex == a[l])
                {
                    while (m1[mex])
                    {
                        ++mex;
                    }
                }
                ++l;
            }
            ans.pb(mex);
            mex = 0;
        }
        l = ans.size();
        cout << l << endl;

        rep(l)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}