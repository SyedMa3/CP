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
        ll n,k;
        cin >> n >> k;

        ++k;

        vl a(n);

        rep(n)
        {
            cin >> a[i];
            a[i] = pow(10, a[i]);
        }

        vl b(n);

        rep(n)
        {
            if(i == n-1)
            {
                b[i] = INT_MAX;
                break;
            }

            b[i] = a[i+1]/a[i] - 1;
        }

        ll sum = 0;

        rep(n)
        {
            if(k<=0)
            {
                break;
            }
            int p = min(b[i], k);
            sum += p*a[i];
            k -= p;
        }

        cout << sum << endl;
    }

    return 0;
}