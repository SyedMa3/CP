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

        vl b(a);

        sort(all(b));
        ll ans1 = 0;
        for(int i=0; i<n-1; ++i)
        {
            ans1 += abs(b[i]-b[(n-1)/2]);
        }
        ll ans5 = 0;

        for(int i=1; i<n; ++i)
        {
            ans5 += abs(b[i]-b[1+ (n-1)/2]);
        }

        if(n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if(n == 3)
        {
            ll a1 = llabs(b[0]-b[1]);
            ll a2 = llabs(b[2]-b[1]);
            ll a3 = min(a1, a2);
            cout << a3 << endl;
            continue;
        }


        ll ans3 = LONG_LONG_MAX;
        // for(int i=1; i<n-1; ++i)
        // {
        //     for(int j=i+1; j<n-1 and j!=i; ++j)
        //     {
        //         ll x1 = a[j] - a[0];
        //         ll x2 = a[n-1] - a[i];
        //         if(llabs(x1-x2) < ans3)
        //         {
        //             ans3 = llabs(x1-x2);
        //         }
        //     }
        // }

        ll l=1;
        ll r=n-2;
        ans3 = min(ans1, ans5);
        while(l<r)
        {
            ll a1 = b[n-1] - b[l];
            ll a2 = b[r] - b[0];

            ans3 = min(ans3, abs(a1-a2));

            if(a1>a2)
            {
                ++l;
            }
            else
            {
                --r;
            }
        }
        
        cout << ans3 << endl;
    }

    return 0;
}