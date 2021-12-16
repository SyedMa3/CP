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

        vl a(n);
        rep(n)
        {
            cin >> a[i];
        }

        ll g1 = a[0];
        for(int i=2;i<n; i+=2)
        {
            g1 = __gcd(g1,a[i]);
        }

        if(g1 == 1)
        {
            g1 = 0;
        }
        else
        {
            for(int i=1; i<n; i+=2)
            {
                if(a[i]%g1 == 0)
                {
                    g1 = 0;
                    break;
                }
            }
        }
        if(g1)
        {
            cout << g1 << endl;
            continue;
        }


        ll g2 = a[1];

        for(int i=3; i<n; i+=2)
        {
            g2 = __gcd(g2, a[i]);
        }

        if(g2 == 1)
        {
            g2 = 0;
        }
        else
        {
            for(int i=0;i<n; i+=2)
            {
                if(a[i]%g2 == 0)
                {
                    g2 = 0;
                    break;
                }
            }
        }

        cout << g2 << endl;
    }

    return 0;
}