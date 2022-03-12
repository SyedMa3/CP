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
        int n,m;
        cin >> n >> m;

        vector<pair<int,pair<int,int>>> a(m);

        rep(m)
        {
            cin >> a[i].second.first >> a[i].first;
            a[i].second.second = i+1;
        }

        sortall(a);

        vpii s(2*n);
        ll sum = 0;

        rep(2*n)
        {
            s[i].first = a[i].second.first;
            s[i].second = a[i].second.second;
            sum += a[i].first;
        }

        sortall(s);

        int l=0,r = 2*n - 1;
        cout << sum << endl;
        while(l<r)
        {
            cout << s[l].second << " " << s[r].second << endl;

            ++l;
            --r;
        }

    }

    return 0;
}