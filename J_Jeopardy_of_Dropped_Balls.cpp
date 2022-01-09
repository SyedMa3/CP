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
    while (t--)
    {
        int n,m,k;
        cin >> n >> m >> k;

        vvi a(n, vi(m));

        rep(n)
        {
            repc(j,m)
            {
                cin >> a[i][j];
            }
        }

        rep(k)
        {
            int x;
            cin >> x;
            int j=0;
            while(j<n)
            {
                if(a[j][x-1] == 1)
                {
                    a[j][x-1] = 2;
                    ++x;
                }
                else if(a[j][x-1] == 2)
                {
                    ++j;
                }
                else
                {
                    a[j][x-1] = 2;
                    --x;
                }
            }

            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}