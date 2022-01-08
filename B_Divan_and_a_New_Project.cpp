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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vpl a(n);

        rep(n)
        {
            cin >> a[i].first;
            a[i].second = i;
        }

        vpl b = a;

        sort(rall(a));

        vpl ans(n);

        int po=1, ne=-1;

        ll time = 0LL;


        rep(n)
        {
            if(i%2 == 0)
            {
                ans[i].first = po;
                ++po;
            }
            else
            {
                ans[i].first = ne;
                --ne;
            }

            ans[i].second = a[i].second;

            time += 2*(a[i].first)*abs(ans[i].first);
        }

        sort(all(ans), sortbysec);

        cout << time << endl;

        cout << 0 << " ";

        rep(n)
        {
            cout << ans[i].first << " ";
        }
        cout << endl;
    }

    return 0;
}