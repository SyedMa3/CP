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

        string a,b;

        cin >> a >> b;

        int z[2] = {0,0};
        int o[2] = {0,0};

        int s1=0,d1=0;

        rep(n)
        {
            if(a[i] == '0')
            {
                z[0]++;
            }
            else
            {
                o[0]++;
            }
        }

        rep(n)
        {
            if(b[i] == '0')
            {
                z[1]++;
            }
            else
            {
                o[1]++;
            }
        }

        if(o[0] != o[1] and z[0]+1 != o[1])
        {
            cout << -1 << endl;
            continue;
        }

        int f1=0;//different ones
        int f2=0;

        rep(n)
        {
            if(a[i] == '1' and b[i] == '0')
            {
                ++f1;
            }

            if(a[i] == b[i])
            {
                ++f2;
            }

        }
        ll ans=-2;

        if(o[0] == o[1] and z[0]+1 == o[1])
        {
            ans = min(f1*2,f2);
        }
        else if(o[0] == o[1])
        {
            ans = f1*2;
        }
        else if(z[0]+1 == o[1])
        {
            ans = f2;
        }

        cout << ans << endl;
    }

    return 0;
}