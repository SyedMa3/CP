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

        string s;
        cin >> s;

        int k;
        cin >> k;

        int sp[26] = {0};

        rep(k)
        {
            char x;
            cin >> x;

            sp[x - 'a'] = 1;
        }
        ll z = -1;
        ll ans = -1;
        rep(n)
        {
            if(sp[s[i] - 'a'] == 1)
            {
                if(z == -1)
                {
                    ans = i;
                    z = i+1;
                }
                else
                {
                    ans = max(ans, i-z+1);
                    z = i+1;
                }
            }
        }

        cout << max(ans,0LL) << endl;
    }

    return 0;
}