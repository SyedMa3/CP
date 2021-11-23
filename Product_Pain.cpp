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

ll solve(vector<int>& a, int st, int size)
{
    int mean = (a[st] + a[st+size-1])/2;

    int x1 = *lower_bound(a.begin()+st, a.begin()+st+size, mean);
    int x3 = *upper_bound(a.begin()+st, a.begin()+st+size, mean);
    int x2 = *(lower_bound(a.begin()+st, a.begin()+st+size, mean)-1);

    ll y1 = ((a[st+size-1]-x1)*(x1 - a[st]));
    ll y2 = ((a[st+size-1]-x2)*(x2-a[st]));
    ll y3 = ((a[st+size-1]-x3)*(x3-a[st]));
    ll z;
    if(y1<y2)
    {
        z = y2;
    }
    else
    {
        z = y1;
    }

    return z;
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

        vi a(n);
        rep(n)
        {
            cin >> a[i];
        }
        ll sum = 0;

        for(int i=3; i<=n; ++i)
        {
            for(int j=0;j<=n-i; ++j)
            {
                ll x = solve(a,j,i);
                sum += x;
            }
        }

        cout << sum << endl;
    }

    return 0;
}