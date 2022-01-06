#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define rep(n) for (int i = 0; i < n; ++i)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define fore(i, n1, n2) for (ll i = n1; i < n2; ++i)
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

        vi p(30, 0);

        int m = 1e9;

        rep(30)
        {
            repc(j, n)
            {
                if ((a[j] >> i) % 2 != 0)
                {
                    p[i]++;
                }
            }

            if (p[i] != 0)
                m = min(m, p[i]);
        }

        if(m == 1e9)
        {
            fore(i,1,n+1)
            {
                cout << i << " ";
            }
            cout << endl;
            continue;
        }

        fore(i, 1, m+1)
        {
            int flag = 1;
            fore(j, 0, 30)
            {
                // if(p[j] == 0)
                //     continue;
                if (p[j] % i != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
                cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}