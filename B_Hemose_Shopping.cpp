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
        int n, x;
        cin >> n >> x;

        vi a(n);
        multimap<int, int> m;

        rep(n)
        {
            cin >> a[i];
            m.insert({a[i], i});
        }

        vi b(n);
        b = a;

        sortall(a);

        int mind = 1e9;


        if(b == a)
        {
            cout << "YES\n";
            continue;
        }
        // cout << mind << endl;

        if(n >= 2*x)
        {
            cout << "YES\n";
            continue;
        }
        else
        {
            int f=1;
            for(int i=n-x; i<x; ++i)
            {
                if(a[i] != b[i])
                {
                    f = 0;
                    break;
                }
            }
            if(f)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}