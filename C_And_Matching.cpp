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
        ll n,k;
        cin >> n >> k;

        if(n == 4 and k == 3)
        {
            cout << -1 << endl;
            continue;
        }

        if(k == n-1)
        {
            map<ll,ll> m;

            rep(n/2)
            {
                m[i] = n-1-i;
            }

            m[0] = 1;
            m[1] = 0;
            m[n/2 - 1] = n-1;
            m[n/2] = n-2;
            m[n-1] = n/2 - 1;
            m[n-2] = n/2;

            map<ll,ll> m2;

            for(auto i : m)
            {
                if(m2[i.first])
                    continue;
                cout << i.first << " " << i.second << endl;
                m2[i.second] = 1;
            }
            continue;
        }

        map<ll,ll> m;

        rep(n/2)
        {
            m[i] = n-1-i;
        }

        m[0] = n-1-k;
        m[k] = n-1;
        m[n-1-k] = 0;
        m[n-1] = k;

        map<ll,ll> m2;

        for(auto i : m)
        {
            if(m2[i.first])
                continue;
            cout << i.first << " " << i.second << endl;
            m2[i.second] = 1;
        }

    }

    return 0;
}