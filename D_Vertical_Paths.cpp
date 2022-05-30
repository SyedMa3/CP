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
#define trr(it, x) for (auto it = x.rbegin(); it != x.rend(); it++)
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

        rep(n) cin >> a[i];

        vi occ(n+1, 0), vis(n+1, 0);

        rep(n)
        {
            occ[a[i]]++;
        }

        if(n == 1)
        {
            cout << "1\n1\n1\n\n";

            continue;
        }

        vi leafs;

        fore(i,1,n+1)
        {
            if(occ[i] == 0)
            {
                leafs.pb(i);
            }
        }

        vpii m;

        vvi li(n+1);

        for(auto i : leafs)
        {
            li[i].push_back(i);
            int x = a[i-1];
            if(vis[x] == 1)
            {
                m.pb({1,i});
                continue;
            }
            li[i].pb(x);
            vis[i] = 1;
            vis[x] = 1;
            int c = 2;

            while(x != a[x-1] and vis[a[x-1]] == 0)
            {
                x = a[x-1];
                vis[x] = 1;
                li[i].pb(x);
                ++c;
            }

            m.pb({c, i});
        }

        sort(all(m));
        reverse(all(m));

        cout << m.size() << endl;

        for(auto i : m)
        {
            cout << i.first << endl;

            trr(it, li[i.second])
            {
                cout << *it << " ";
            }
            cout << endl;
        }

        // cout << m.rbegin()->first << endl;
        cout << endl;
    }

    return 0;
}