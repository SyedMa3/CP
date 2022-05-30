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
        string s;
        cin >> s;
        int n = s.size();

        vi o(n,0),q(n,0),z(n,0);

        int fz=-1, lo = -1;

        rep(n)
        {
            if(i != 0)
            {
                o[i] = o[i-1];
                q[i] = q[i-1];
                z[i] = z[i-1];
            }

            if(s[i] == '1')
            {
                lo = i;
                o[i]++;
            }
            else if(s[i] == '0')
            {
                if(fz == -1)
                    fz = i;
                z[i]++;
            }
            else
                q[i]++;
        }
        int ans = 0;
        if(lo == -1 and fz == -1)
        {
            cout << n << endl;
            continue;
        }

        if(fz == -1)
        {
            cout << n-lo << endl;
            continue;
        }
        if(fz == 0)
        {
            cout << 1 << endl;
            continue;
        }

        if(lo == -1)
        {
            cout << fz+1 << endl;
            continue;
        }


        cout << abs(fz-lo) + 1 << endl;

    }

    return 0;
}