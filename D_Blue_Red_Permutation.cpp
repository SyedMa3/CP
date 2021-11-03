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
        vi a(n);

        rep(n)
        {
            cin >> a[i];
        }
        vector<char> b(n);
        unordered_map<char, int> m;

        rep(n)
        {
            cin >> b[i];
            m[b[i]]++;
        }

        vi red;
        vi blue;

        rep(n)
        {
            if(b[i] == 'R')
            {
                red.pb(a[i]);
            }
            else
            {
                blue.pb(a[i]);
            }
        }

        sort(all(red));
        sort(all(blue));
        int flag = 0;
        int count = 1;
        for(auto i: blue)
        {
            if(i<count)
            {
                flag = 1;
                break;
            }
            ++count;
        }
        if(flag)
        {
            cout << "NO\n";
            continue;
        }
        count = n;

        for(auto i=red.rbegin(); i!=red.rend(); ++i)
        {
            if(*i>count)
            {
                flag = 1;
                break;
            }
            --count;
        }

        if(flag)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
    }

    return 0;
}